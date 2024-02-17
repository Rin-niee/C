#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) 
{
	douple x1,x2,d,a,b,c;
	a =15, b=16, c=1;
	d = b*b-4*a*c;
	if (d>0)
	{
		x1=(((-b)-sqrt(d))/(2*a));
		x2=(((-b)+sqrt(d))/(2*a));
		printf(x1, x2);
	}
	if (d==0)
	{
		x1=-(b/(2*a));
		printf(x1);
	}
	if (d<0)
	{
		printf("Error");
	}
	return 0;
}
