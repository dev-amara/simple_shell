#include <unistd.h>
#include <stdio.h>
 
int call_cmd(char *prog, char **args)
{
	execve(prog, args, NULL);
	perror("./shell");
}

int main()
{
	char *args[] = {"/bin/sh", NULL};
	call_cmd(args[0], args);
}
