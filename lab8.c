#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
	char lastname[60];
	char name[60];
	int birthyear;
	char gender[60];
	float height; 
} human;

int main() 
{	human humens[16];
	human hus;
	int i, j, h, k, n; 
	char c[100];
	char a[100];
	char s[1000];
	h=0;
	FILE* f;
	f = fopen("text.txt", "r");
	if (f==NULL)
	{
		printf("Error");
	}
	else
	{	
		for (i=0; i<16; i++)
		{
			fscanf(f, "%s %s %d %s %f", humens[i].lastname, humens[i].name, &humens[i].birthyear, &humens[i].gender, &humens[i].height);
			//printf("%s %s %d %s %.2f\n", humens[i].lastname, humens[i].name, humens[i].birthyear, humens[i].gender, humens[i].height);		
		}
		printf("Enter parameter:\n");
		gets(c);
			for(i=0; i<16; i++)
			{
				for(j=0; j<16; j++)
				{
					if (strcmp(c, "name")==0)
				 	{
				 		h= strcmp(humens[i].name, humens[j].name);
					}
					if (strcmp(c, "lastname")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
						if (strcmp(c, "year")==0)
				 	{
				 		h = humens[i].birthyear- humens[j].birthyear;
					}
					if (strcmp(c, "gender")==0)
				 	{
				 		h= strcmp(humens[i].gender, humens[j].gender);
					}
					if (strcmp(c, "height")==0)
				 	{
				 		h = humens[i].height - humens[j].height;
					} 
					if (h>0)
					{
						hus = humens[i];
						humens[i]=humens[j];
						humens[j]=hus;
					}
					else if ((h=0) && (strcmp(c, "name")==0))
					{
						printf("Enter parameter again:\n");
						gets(a);
						if (strcmp(a, "lastname")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
						if (strcmp(a, "year")==0)
				 	{
				 		h = humens[i].birthyear- humens[j].birthyear;
					}
					if (strcmp(a, "gender")==0)
				 	{
				 		h= strcmp(humens[i].gender, humens[j].gender);
					}
					if (strcmp(a, "height")==0)
				 	{
				 		h = humens[i].height - humens[j].height;
					}
					if (h>0)
					{
						hus = humens[i];
						humens[i]=humens[j];
						humens[j]=hus;
					}
					}
					else if ((h=0) && (strcmp(c, "lastname")==0))
					{
						printf("Enter parameter again:\n");
						gets(a);
						if (strcmp(a, "name")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
						if (strcmp(a, "year")==0)
				 	{
				 		h = humens[i].birthyear- humens[j].birthyear;
					}
					if (strcmp(a, "gender")==0)
				 	{
				 		h= strcmp(humens[i].gender, humens[j].gender);
					}
					if (strcmp(a, "height")==0)
				 	{
				 		h = humens[i].height - humens[j].height;
					}
					if (h>0)
					{
						hus = humens[i];
						humens[i]=humens[j];
						humens[j]=hus;
					}	
					}
					else if ((h=0) && (strcmp(c, "year")==0))
					{
						printf("Enter parameter again:\n");
						gets(a);
						if (strcmp(c, "name")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
						if (strcmp(a, "lastname")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
					if (strcmp(a, "gender")==0)
				 	{
				 		h= strcmp(humens[i].gender, humens[j].gender);
					}
					if (strcmp(a, "height")==0)
				 	{
				 		h = humens[i].height - humens[j].height;
					}
					if (h>0)
					{
						hus = humens[i];
						humens[i]=humens[j];
						humens[j]=hus;
					}	
				}
				else if ((h=0) && (strcmp(c, "gender")==0))
				{
						printf("Enter parameter again:\n");
						gets(a);
						if (strcmp(a, "name")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
						if (strcmp(a, "lastname")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
					if (strcmp(a, "year")==0)
				 	{
				 		h = humens[i].birthyear- humens[j].birthyear;
					}
					if (strcmp(a, "height")==0)
				 	{
				 		h = humens[i].height - humens[j].height;
					}
					if (h>0)
					{
						hus = humens[i];
						humens[i]=humens[j];
						humens[j]=hus;
					}	
				}
				else if ((h=0) && (strcmp(c, "height")==0))
				{
						printf("Enter parameter again:\n");
						gets(a);
						if (strcmp(a, "name")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
						if (strcmp(a, "lastname")==0)
				 	{
				 		h= strcmp(humens[i].lastname, humens[j].lastname);
					}
					if (strcmp(a, "year")==0)
				 	{
				 		h = humens[i].birthyear- humens[j].birthyear;
					}
					if (strcmp(a, "gender")==0)
				 	{
				 		h= strcmp(humens[i].gender, humens[j].gender);
					}
					if (h>0)
					{
						hus = humens[i];
						humens[i]=humens[j];
						humens[j]=hus;
					}	
				}
			}
		}
	for (k=0; k<16; k++)
	{
		printf("%s %s %d %s %.2f\n", humens[k].lastname, humens[k].name, humens[k].birthyear, humens[k].gender, humens[k].height);		
	}
}
	return 0;	
}
