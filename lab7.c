#include "nya.h"

int main() 
	{ int i, j, n;
	printf("enter the required number of people:\n");
	scanf("%d", &n);
	humen mass1[n], massort[n];
	printf("Enter details\n");
	for(i=0; i<n; i++)
	{
		printf("Enter name:");
		scanf("%s", mass1[i].name);
		printf("Enter last name:");
		scanf("%s", mass1[i].lastname);
		printf("Enter birthyear:");
		scanf("%d", &mass1[i].birthyear);
		fflush(stdin);
	}
	memmove(massort, mass1, sizeof(humen)*n);
	sorting(massort, n);
	for (i=0; i<n; i++)
	{
		printf("information:\n");
		printf("Name: %s\n", massort[i].name);
		printf("Last name: %s\n", massort[i].lastname);
		printf("Birth year: %d\n", massort[i].birthyear);
		printf("\n");
	}
	return 0;
	}
