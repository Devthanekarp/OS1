#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void my_handler(int signo)
{
	printf("i have received signal number %d\n",signo);
	printf("Doing cleanup\n");
	//close all the connections
	////cleanup.....
	signal(signo,SIG_DFL);
	kill(getpid(),signo);
	
}
int main()
{
	int count=0;
	signal(SIGINT,my_handler);
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
