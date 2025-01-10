#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void main()
{
	pid_t childpid=fork();
	if(childpid<0)
	{
		printf("Child Creation Unsuccessful");
	}
	else if(childpid==0)
	{
		printf("\nChild Process =>  ");
		printf("PID: %d\n",getpid());
	}
	else
	{
		printf("\nParent Process =>  ");
		printf("PID : %d ,",getpid());
		printf("Child PID: ");
		printf("%d",childpid);
	}
}
