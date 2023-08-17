#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid = getpid();

    printf("pid = %d\n", pid);
    return 0;
}
