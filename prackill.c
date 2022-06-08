#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int main()
{
	pid_t cpid ;
	int status ;	
	cpid =fork();
	if(cpid == 0) // child process
	{
		printf("Child process pid is %d\n");
	getpid() ;
		while(1) {
			printf("Hello world\n") ;
			sleep(1) ;
		}
	}
	else //parent process
	{
		printf("Parent process pid is %d\n");
	getpid() ;
		system("ps -al") ;
		printf("Sending SIGINT to child process....\n") ;
		kill(cpid, SIGINT) ;
		wait(&status) ;
		system("ps -al") ;
	}
	return 0 ;
}
