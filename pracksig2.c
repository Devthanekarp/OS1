#include<stdio.h>
#include<signal.h>
void signal_handler(int signum)
{
printf("Caught the signal %d\n",signum) ;
signal(SIGINT,SIG_DFL) ;
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
