#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

double schet(char *prim) 
{ 
	char *res; 
	double result, num, i;
	result = 0;
	num = 0;
	res = strtok(prim, " "); 
	while (res != NULL) 
	{  
	for (i=0; i<strlen(prim); i++)
	{
		if (res[i] >= '0' && res[i] <= '9') 
		{ 
		num = atof(res);
		}
		else if (res[i] == '+') 
		{ 
			result += num; 
		} 
		else if (res[i] == '-') 
		{ 
			result -= num; 
		} 
	}
	return result; 
}
