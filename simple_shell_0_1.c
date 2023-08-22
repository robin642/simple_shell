#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
	char *buffer = NULL;
	size_t buf_size = 0 ;
	char *take ;
	char **tab = NULL;
	int stat, i = 0;
	int num_char;
	pid_t pid ;

	while (1);{
		write (1,"$",2);
		num_char = getline(&buffer,&buf_size, stdin);
		take = strtok(buffer,"\t\n");
		while(take){
			tab[i] = take;
			take = strtok(NULL," \t\n");
			i++;
		}
		tab[i] = NULL;
		pid = fork();
		if (pid == 0){
			if (execve(tab[0],tab,NULL) == -1)
					perror("execve");}
					else
					wait(&stat);
					i=0;
					free(tab);
					}}

