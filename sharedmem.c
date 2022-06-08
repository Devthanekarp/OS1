#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>


int main()
{
	int shmid;
	//create
	shmid=shmget(key-t)1234,12,IPC_CREAT | IPC_EXCL;
	if(shmid<0)
	{
		perror("shmget:");
		shmid=shmget((key)
