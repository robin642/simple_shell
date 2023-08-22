#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main ()
{
	extern char **environ;
	int j = 0;
	while (environ[j])
	{
		printf("%s\n" , environ[j]);
		j++;
	}} 
