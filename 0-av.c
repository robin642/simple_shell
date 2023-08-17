#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av){
 (void)ac;
 int j=0;
 while (av[j])
 {
	 printf(" %s \n",av[j]);
	 j++;

}
return (0);
}
