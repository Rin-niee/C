#include <math.h>
# include <cstdbool.h>

double a,b,c,e,f;
double perimeter(double a, double b, double c)
	{
		double p;
		p=a+b+c;
		return p;
	}
double square(double a, double b, double c)
	{
		float p1, p2,s;
		p1=(a+b+c);
		p2=p1/2;
		s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		return s;
	}
bool us(double a, double b, double c)
{
	if ((a<b+c) && (b<a+c) && (c<b+a))
	{
	return True;
	}
	else
	{
	return False;
	}
}
