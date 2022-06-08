#include<stdio.h>
#include<signal.h>


void signal_handler(int signum)
{
	printf("Caught the signal %d \n",signum);
}
int main()
{
	while(1)
	{
		printf("hello world\n");
		sleep(1);
	}
	return 0;
}
