#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char s[1000];
	int y;
	
	FILE *file, *fl;
	file =fopen("name.txt", "r");
	fl =fopen("perez.txt", "w");
	
	if (file==NULL)
		{
		
			printf("Error!");
		}
	else
	{
	while(fgets(s, 1000, file)!=NULL)
		{
			y=atoi(s+strlen(s)-5); #atoi- изменение на тип int
			if (y>1980)
			{
				fputs(s, fl); #вывод строки в поток данных
			}
		}
	}
	fclose(file);
	fclose(fl);
	return 0;
} 
