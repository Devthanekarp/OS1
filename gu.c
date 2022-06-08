#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main()
{
	int count=0;
	signal(SIGINT,SIG_IGN);
	while(1)
	{
		printf("hello\n");
		sleep(1);
		count++;
		printf("value of count,,,,,, %d \n ",count);
		if(count ==40)
			signal(SIGINT,SIG_DFL);
	}
	return 0;
}
