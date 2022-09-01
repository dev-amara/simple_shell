#ifndef SHELL_H
#define SHELL_H

/*Libraries*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

/*string handlers*/
char *concat_str(char *dest, char *src);
int _strcmp(char *s1, char *s2);

/*command handlers*/
int call_command(char *program, char *cmd, char **argv);

/*built-ins*/
int builtin_cmd(char *cmd);
void quit(char *cmd);
void env_builtin(void);

/*environment variables*/
extern char **environ;

/*helper functions*/
int cmd_type(char *cmd);
/**
 *struct built-ins - Handles the exit and env builtins
 *@exit: First member
 *@env: Second member
 *
 */
struct built_ins
{
	char *exit;
	char *env;
} built_ins;
#endif
