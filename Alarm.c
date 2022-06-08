//ALARM
#include<stdio.h>
#include<sys/types.h>
#include<signal.h>

int main()
{
	
	kill(getpid(),14);
	return 0;
}
