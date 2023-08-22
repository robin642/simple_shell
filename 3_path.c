#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
 char *_getenv(const char *env)
{
	extern char **environ ;
	int j=0;
	char *k;
	while(environ[j])
	{
		k = strtok(environ[j], "=");
		if (strcmp(env,k)== 0)
			return(strtok(NULL,"\n"));
		j++;
	}
	return(NULL);
}
char *get_command(char *command)
{
	char *path = _getenv("path");
	char *token;
	char *cmd_ful;
	struct stat st ;
	token = strtok (path,":");
	while (token)
	{
		cmd_ful = malloc(strlen(token) + strlen(command) +2);
	}
} 

