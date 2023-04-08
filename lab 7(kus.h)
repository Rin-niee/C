#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
typedef struct
	{
		char name[50];
		char lastname[50];
		int birthyear;
	} humen;
void sorting(humen array[], int n)
{int i, j;
	humen h;
	for(i=0; i<n; i++)
	{
	for(j=0; j<n; j++)
	{
		if (array[j].birthyear< array[j+1].birthyear)
		{
			h = array[j];
			array[j]=array[j+1];
			array[j+1]=h;
		}
	}	
	}
}
