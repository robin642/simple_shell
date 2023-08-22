#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int ac,char **av,char ** env)

{
	int j=0;
	while(env[j]){
		printf("%s \n",env[j]);
		j++;
	}
}
