#include "masss.h"

int main() 
{	int n,m,i,j;
	char f;
	printf("Enter N and M: \n");
	scanf("%d %d", &n, &m);
	double **x;
	x=(double**)malloc(n*sizeof(double*));
	for (i=0;i<m;i++)
	{
		x[i]=(double*)malloc(m*sizeof(double));
	}
	
	double **aa;
	aa=(double**)malloc(n*sizeof(double*));
	for (i=0;i<m;i++)
	{
		aa[i]=(double*)malloc(m*sizeof(double));
	}
	printf("%s", "Enter the values separated by a space for mass a: \n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
		printf("a[%d][%d]=",i,j);
    	scanf("%lf", &**aa);
		}
	}
	double **bb;
	bb=(double**)malloc(n*sizeof(double*));
	for (i=0;i<m;i++)
	{
		bb[i]=(double*)malloc(m*sizeof(double));
	}
	printf("%s", "Enter the values separated by a space for mass b: \n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%lf", &**bb);
		}
	}
	printf("enter arithmetic sign: \n");
	scanf(" %c", &f);
	if (f == '+')
	{
		x = sum(aa, bb, n,m);
	}
	if (f == '-')
	{
		x = diff(aa, bb, n,m);
	}
	if (f == '-')
	{
		x = prod(aa, bb, n,m);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; i++) 
		{
			printf("%d ", *(x+i*m+j));
		}
		printf("\n");
	}
	free(aa);
	free(bb);
	free(x);
return 0;
}
