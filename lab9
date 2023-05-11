#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//  -123.5 + 4 - 456+56
int main() 
{ 	char prim[90];
	char prob[10]=" +";
	char *res, *res1, *res2, *res3;
	int flag;
	double result;
	result=0;
	printf("Enter an example: \n");
	fgets(prim, 90, stdin);
	res = strtok(prim,prob);
	while (res!=NULL)
	{ 	printf("%s\n", res);
		if (strcmp(res, "-") == 0)
		{
			flag = 1;
		}
		if (isdigit(*res))
        {	
	        if (flag ==1)
	        {
				result -= atof(res);
			}
			if (flag == 0)
	        {
				result += atof(res);
			}
			flag = 0;
        }
        if (!isdigit(*res) && (strcmp(res, "-") != 0))
        {
        	result+=atof(res);
		}
        res = strtok(NULL, prob);
    }
    printf("Result is: %.1f", result);
    return 0; 
}
