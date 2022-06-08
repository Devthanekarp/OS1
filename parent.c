#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t pid;
	printf("HEllo world ..befor fork..pid is %d\n ",getpid());

	pid=fork();
	if(pid== -1)
	{
		printf("FAiled...\n ");
		return 0;
	}
	else
	{
		if(pid== 0)//chilld process
		{
			printf("hello world ...after fork ...pid is %d and ppid is %d\n",getpid(),getppid());
		}
		else//parent process
		{
			printf("hello world...after [fork int the parent..pid is %d and cpid is %d \n",getpid(),pid);
			while(1)
			{
				printf("hello ....hello");
				sleep(1);
				printf("after sleep hello world");
			}
		//	wait();
		}
	}
	printf("hello world...after fork...pid is %d\n",getpid());
	return 0;
}

