#include "mathfunct.h"

int main(int argc, char *argv[])
{ double a,b,c,e,f, 
bool k;
k=True;
printf("enter 3 numbers:\n");
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
	if (us(a,b,c)==k)
		{
	  	e = perimeter(a, b, c);
	  	f = square(a, b, c);
		printf("Perimeter== %lf\n Square = %lf\n", e, f);
	  	}
	
	else
	{
		printf("does not satisfy the condition");
	}
return 0;
}
