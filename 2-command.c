#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **separ(char *word)
{
	char *take, **takeitall = NULL;
	int j=0;
	take = strtok(word, "\t\n");
	while (take != NULL){
		j++;
		takeitall = realloc(takeitall,j *sizeof(char *));
		      if (takeitall == NULL)
		      {perror("realloc");
		     exit(EXIT_FAILURE); }
	      takeitall[j-1] = take ;
		take = strtok(NULL, "\t\n");
	}
	for(j=0; takeitall[j] ;j++)
		printf("%s \n",takeitall[j]);
	return(takeitall);
}
int main(int ac, char **av)
{
        (void)ac;
        char *buf = NULL;
        size_t size_buff = 0;
	char **takeitall = NULL;
       char *take = NULL;       
	int num_char = 0 ;

        num_char = getline(&buf,&size_buff,stdin);
        if (num_char == -1){
                perror("getline");
		exit(EXIT_FAILURE);}
        buf[num_char - 1] = '\0';
       	printf("%s\n", buf);
      separ(buf);
       	return 0;
}
