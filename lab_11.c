#include <stdio.h>
#include <stdlib.h>

double sum(int n, ...)
{
	double res;
	res=0;
	int i;
	va_list list;
	va_start(list, n);
	for(i=0; i<n; i++)
	{
		res+= va_arg(list, double);
	}
	va_end(list);
	return res;
}

double min(int n, ...)
{
	double res, min;
	int i;
	res=0;
	va_list list;
	va_start(list, n);
	res = va_arg(list, double);
	for(i=1; i<n; i++)
	{
		min= va_arg(list, double);
		if (min<res)
		{
			min=res;
		}
	}
	va_end(list);
	return min;
}

double max(int n, ...)
{
	double res, max;
	int i;
	res=0;
	va_list list;
	va_start(list, n);
	res = va_arg(list, double);
	for(i=1; i<n; i++)
	{
		max= va_arg(list, double);
		if (max<res)
		{
			max=res;
		}
	}
	va_end(list);
	return max;
}

double sum( n, ...)
{
	double res;
	res=0;
	int i;
	va_list list;
	va_start(list, n);
	for(i=0; i<n; i++)
	{
		res+= va_arg(list, double);
	}
	va_end(list);
	return res;
}
