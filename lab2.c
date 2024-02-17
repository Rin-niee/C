#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double sum1=0,sum2=0;
	int i,j,n,o;
 	printf("Enter N:");
	scanf("%d", &n);   
	double mas[n][n];
    printf("%s", "Enter the values separated by a space: \n");
    for ( i = 0; i<n; i++)
	{
	    for ( j = 0; j<n; j++)
		{
	   	 	printf("mas[%d][%d]=",i,j);
	    	scanf("%lf", &mas[i][j]);
	    }
	}
	
    for ( i = 0; i<n; i++)
	{
	    for ( j = 0; j<n; j++)
		{
			sum2 = sum2+mas[i][n-1-j];
			if(i==j)
				{
				sum1 = sum1+mas[i][j];
				}
		}
	}
    printf("%lf\n %lf\n", sum1, sum2);
double kv[n][n];
for ( i = 0; i<n; i++)
{
	for ( j = 0; j<n; j++)
		{
			kv[i][j]=0;
			for ( o = 0; o<n; o++)
			{
				kv[i][j]=kv[i][j]+mas[i][o]*mas[o][j];
			}
		}
}
for ( i = 0; i<n; i++)
{
	for ( j = 0; j<n; j++)
		{
			printf("%lf", kv[i][j]);
		}
	printf("\n");
}
return 0;
}
//вариант для матрицы любого размера
