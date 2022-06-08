//SIGAL INTERRUPT
#include<stdio.h>
#include<sys/types.h>
#include<signal.h>

int main()
{
	//sigint or 2 can be used 
	kill(4412,SIGINT);
	return 0;
}

