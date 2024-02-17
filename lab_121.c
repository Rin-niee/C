#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	char c[80];
	char *f;
	int n, n1, n2, n3;
	char *s;
	s = (char*)malloc(40*sizeof(char));
	printf("Enter desired condition:");
	scanf("%s", &c);
	struct tm *local, *gm;
	time_t t;
	struct tm j;
	if (strcmp(c, "now")==0)
	{
		t = time(NULL);
		local = localtime(&t);
		printf("Local time and date: %s", asctime(local));
		gm = gmtime(&t);
		printf("Greenwich mean time and date: %s", asctime(gm));
		
	}
	if (strcmp(c, "weekday")==0)
	{	
		printf("Enter date:");
		scanf("%d.%d.%d", &n, &n1, &n2);
		j.tm_year=n-1900;
		j.tm_mon=n1;
		j.tm_mday=n2;
		mktime(&j);
		printf("The day of week is: %d", j.tm_wday);
	}
	if (strcmp(c, "month")==0)
	{
		printf("Enter age and month:\n");
		scanf("%d.%d", &n, &n1);
		j.tm_year=n-1900;
		j.tm_mon=n1-1;
		j.tm_mday=1;
		mktime(&j);
		struct tm rtime=j;
		f = "%d %b %Y";
		while (rtime.tm_mon == j.tm_mon)
		{
			strftime(s, 40, f, &rtime);
			printf("%s\n", s);
			rtime.tm_mday=rtime.tm_mday+1;
			mktime(&rtime);
		}
	}
	if (strcmp(c, "year")==0)
	{
		printf("Enter year:\n");
		scanf("%d", &n);
		j.tm_year=n-1900;
		j.tm_mon=0;
		j.tm_mday=1;
		mktime(&j);
		sprintf(s, "%d", n);
		struct tm rtime = j;
		f = "%d %b %Y";
		while (rtime.tm_year == j.tm_year)
		{
			j = rtime;
			while (rtime.tm_mon == j.tm_mon)
			{
					strftime(s, 40, f, &rtime);
					printf("%s\n", s);
					rtime.tm_mday = rtime.tm_mday + 1;
					mktime(&rtime);
			}
				rtime.tm_mday = 1;
				rtime.tm_mon=rtime.tm_mon+1;
				mktime(&rtime);
		}
	}
return 0;
}
