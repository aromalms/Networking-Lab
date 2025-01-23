#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        char *args[]={"./first",NULL};
        execv(args[0],args);
        printf("Ending-----");
    return 0;
}
