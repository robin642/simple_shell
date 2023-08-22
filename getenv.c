#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
 char *_getenv(const char *name){
	 extern char **environ;
	 int i = 0;
	 char *k;
	 while(environ[i])
	 {
		 k = strtok(environ[i],"=");
		 if (strcmp(k,name)==0)
			 return(strtok(NULL,"="));
		 i++;
		 return (NULL);
	 }}
	 int main()
	 {
		 printf("%s \n" ,_getenv("path numebr"));
		 return (0);
	 }

