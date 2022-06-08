#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
void signal_handler(int signum)
{
printf("Caught the signal %d\n",signum) ;
signal(SIGINT,SIG_DFL) ;
printf("Sending the SIGINT to myself…\n") ;
kill(getpid(), SIGINT) ;
}
int main()
{
(void) signal(SIGINT, signal_handler) ;
while(1)
{
printf("Hello world\n") ;
sleep(1) ;
}
return 0 ;
}
