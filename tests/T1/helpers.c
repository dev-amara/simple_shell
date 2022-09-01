#include "shell.h"

/**
 *builtin_cmd - Checks whether the command is a builtin
 *function, if so execute it.
 *@cmd: a vector array of command line args
 *
 * Return: 1 if command is a builtin, 0 otherwise
 */
int builtin_cmd(char *cmd)
{
	struct built_ins built_ins = {"exit", "env"};

	if (_strcmp(cmd, built_ins.exit) == 0)
	{
		quit(cmd);
		return (1);
	}
	else if (_strcmp(cmd, built_ins.env) == 0)
	{
		env_builtin();
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 *quit - This program frees thr bufer and exits the program
 *@cmd: a vector array of command line arguments
 *
 * Return: void
 */
void quit(char *cmd)
{
	free(cmd);
	exit(0);
}

/**
 *env_builtin - Print the current working environment
 *
 *Return: void
 */
void env_builtin(void)
{
	int i = 0;
	char **env = environ;

	while (env[i])
	{
		write(STDOUT_FILENO, (const void *) env[i], strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}



/**
 *_strcmp - compares two strings
 *@s1: First string
 *@s2: Second string
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int total;

	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*s1 && *s2)
	{
		total = *s1 - *s2;

		if (total != 0)
			break;
		s1++;
		s2++;
	}
	return (total);
}
