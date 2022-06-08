#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/types.h>
int main()
{
	kill(getpid(),14);
	return 0;
}

