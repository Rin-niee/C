#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>

double** sum(double** aa, double** bb, int n, int m)
{
	int i,j;
	double **s;
	s=(double**)malloc(n*sizeof(double*));
	for (i=0;i<m;i++)
	{
		s[i]=(double*)malloc(m*sizeof(double));
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			s[i][j]=0;
			s[i][j]=s[i][j]+(aa[i][j]+bb[i][j]);
		}
	}
return s;
}
double** diff(double** aa, double** bb, int n, int m)
{
	int i,j;
	double **s;
	bb=(double**)malloc(n*sizeof(double*));
	for (i=0;i<m;i++)
	{
		s[i]=(double*)malloc(m*sizeof(double));
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			s[i][j]=0;
			s[i][j]=s[i][j]+(aa[i][j]-bb[i][j]);
		}
	}
return s;
}
double** prod(double** aa, double** bb, int n, int m)
{
	int i,j,o;
	double **s;
	bb=(double**)malloc(n*sizeof(double*));
	for (i=0;i<m;i++)
	{
		s[i]=(double*)malloc(m*sizeof(double));
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			s[i][j]=0;
			for (o = 0; o<n; o++)
			{
				s[i][j]=s[i][j]+(aa[i][o]*bb[o][j]);
			}
		}
	}
return s;
}
