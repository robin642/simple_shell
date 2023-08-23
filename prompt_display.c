#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>

/**
 *
 *
 *
 */

int main(void)

{
		char * arguement[] = {"/bin/ls", "-l", NULL};
		char type[40] = "ls";
		char * environment[] = {NULL};

		while (1)
		{
			printf("What's your name: ");
			
			if (fgets(type, sizeof(type), stdin) == NULL)
			
			if (execve(type, arguement, environment) == -1)
        		{
           			perror("Error prompt will display again!\n");
            			break;
        		}

			printf("Your name is: %s", type);
		}

		return (0);

}
