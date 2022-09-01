#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - execve example
 *
 * Return: Always 0
 */
int main(void)
{
	char *argv[] = {NULL, "-l", "/usr/", NULL};
	char *cmd;
	char *token;
	size_t size = 0;
	ssize_t linesz = 0;
	
	write(1, "$ ", 2);
	getline(&cmd, &size, stdin);
	token = strtok(cmd, "\n"); /*Strip off newline character */
	printf("token len: %ld\n", strlen(token));

	argv[0] = cmd;

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
