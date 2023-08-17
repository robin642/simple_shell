#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/**
  * main - printing environment variables
  * @argv: The pointer string
  * Return: output
  */

int main(int argc, char * argv[])

{
			const char * current_env;
			

			putenv("$ env");
			putenv("USER=julien");
			putenv("LANGUAGE=en_US");
			putenv("SESSION=ubuntu");
			putenv("COMPIZ_CONFIG_PROFILE=ubuntu");
			putenv("SHLVL=1");
			putenv("HOME=/home/julien");
			putenv("C_IS=Fun_:)");
			putenv("DESKTOP_SESSION=ubuntu");
			putenv("LOGNAME=julien");
			putenv("TERM=xterm-256color");
			putenv("PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/b				");
			putenv("in:/usr/games:/usr/local/games:/snap/bin");
			putenv("DISPLAY=:0");
			putenv("$ exit");

			current_env = getenv("$ env");
			printf("$ env%s\n", current_env);
			current_env = getenv("USER");
			printf("USER=%s\n", current_env);
			current_env = getenv("LANGUAGE");
			printf("LANGUAGE=%s\n", current_env);
			current_env = getenv("SESSION");
			printf("SESSION=%s\n", current_env);
			current_env = getenv("COMPIZ_CONFIG_PROFILE");
			printf("COMPIZ_CONFIG_PROFILE=%s\n", current_env);
			current_env = getenv("SHLVL");
			printf("SHLVL=%s\n", current_env);
			current_env = getenv("HOME");
			printf("HOME=%s\n", current_env);
			current_env = getenv("C_IS");
			printf("C_IS=%s\n", current_env);
			current_env = getenv("DESKTOP_SESSION");
			printf("DESKTOP_SESSION%s\n", current_env);
			current_env = getenv("LOGNAME");
			printf("LOGNAME=%s\n", current_env);
			current_env = getenv("TERM");
			printf("TERM=%s\n", current_env);
			current_env = getenv("PATH");
			printf("PATH=%s\n", current_env);
			current_env = getenv("in");
			printf("in:/usr/games:/usr/local/games:/snap/bin%s\n", current_env);
			current_env = getenv("DISPLAY");
			printf("DISPLAY=%s\n", current_env);
			current_env = getenv("$ exit");
			printf("$ exit%s\n", current_env);
			

			
			return (0);
}
