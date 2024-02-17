#include <stdio.h>
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() 
{
    int n, i, num[n], maximum;
    printf("Enter number of number:\n");
    scanf("%d", &n);
    printf("Enter numbers separated by spaces:\n");
    for (i=0; i<n; i++) 
	{
        scanf("%d", &num[i]);
        fflush(stdin);
    }
    maximum = num[0];
    for (i = 1; i < n; i++) 
	{
       maximum = MAX(maximum, num[i]);
    }
    printf("the maximum number is: %d\n", maximum);
    return 0;
}
