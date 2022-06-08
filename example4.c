//changing default  behaviour of signal to signal ignore
//signal handling
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void my_handler(int signo)
{
        printf("i have received signal number %d\n",signo);
	printf("Doing cleanup!\n");
	signal(signo,SIG_DFL);
	kill(getpid(),signo);

        //close all the connections
        //cleanup....
        //signal(signo,SIGN_DFL);
        //kill(grtpid(),signo);
}
int main()
{
        int count=0;
        //SIG_IGN will make signals ignore
        signal(SIGINT,my_handler);
        while(1)
        {
                printf("hello world\n");
                sleep(1);
                count++;
                printf("value of count .....%d\n,",count);
                if(count==10)
                        //default behaviour is meant to kill program
                        signal(SIGINT,SIG_DFL);
        }
        return 0;
}

