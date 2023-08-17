#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	(void)ac;
	char *buf = NULL;
	size_t size_buff = 0;
	int num_char = 0 ;
	num_char = getline(&buf,&size_buff,stdin);
	if (num_char == EOF)
		perror("getline");
	buf[num_char - 1] = '\0';
	printf("%s\n", buf);
	return (0);
}
