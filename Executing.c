#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int j;
	pid_t pid;
	char *argv[] = { "/bin/ls", "-a","/usr/",NULL};
	 for(j=0;j<5;j++){
		 pid = fork();
		 if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		 if(pid ==0){

	if (execve(argv[0],argv ,NULL) ==-1)
	{
		perror("error :");
		exit(EXIT_FAILURE);
	}
		 }
		else
			wait(NULL);
	 }}
