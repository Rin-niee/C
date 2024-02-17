#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

jmp_buf env;

int Fib(int n, int* sum) 
{
	int f;
	if (n == 0 || n == 1) 
	{
	    return 1;
	}

	int x = setjmp(env);

	if (x == 0) 
	{
	    f = Fib(n-1, sum);
	    longjmp(env, 1);
	}

	*sum += f;
	return f + Fib(n-2, sum);
}

int main() 
{
	int sum;
	sum = 0;
	int n;
	scanf("%d", &n);
	printf("Sum of first %d Fibonacci numbers: %d\n", n, Fib(n, &sum));
	printf("Sum is: %d\n", sum);
	return 0;
}
