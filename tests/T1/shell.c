#include "shell.h"

/**
 *call_command - A child process running a new program
 *@program: name of the executable to run
 *@cmd: The command to be run
 *@arg_list: a NULL terminated list of character
 *strings to be passed as the programs argument list.
 *
 * Return: The process id of the executed program
 */
int call_command(char *program, char *cmd, char **arg_list)
{
	pid_t child_pid;

	char *env[] = { NULL };
	char dest[50], src[50];

	strcpy(dest, "/bin/");
	strcpy(src, cmd);

	concat_str(dest, src);

	child_pid = fork();
	if (child_pid != 0)
		/*This is the parent process*/
		return (child_pid);

	/*Search for program in path and execute*/

	execve(cmd, arg_list, NULL);
	perror(program);

}

/**
 *main - start a new process
 *@argc: number of command line arguments
 *@argv: argument vector
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *cmd;
	char *token;
	char stream_chars;
	char *arg_list[] = {NULL, NULL};
	size_t buf_size = 10;

	if (argc < 1)
		return (-1);

	cmd = (char *)malloc(buf_size);

	while (1)
	{
		write(1, "$ ", 2); /* display prompt on screen*/

		char **str_ptr = &cmd; /*double pointer to cmd*/
		/*Read input from terminal*/
		stream_chars = getline(str_ptr, &buf_size, stdin);
		token = strtok(cmd, "\n");

		if (cmd_type(token))
			continue;
		arg_list[0] = token;

		if (stream_chars < 0)
			break;
		call_command(argv[0], arg_list[0], arg_list);

	}
	free(cmd);
	return (0);
}
/**
 *cmd_type - checks to see if the command
 *is a built-in or an executable
 *@cmd: array os pointers to command line args
 *
 * Return: 1 if the command is executable, 0 otherwise.
 */
int cmd_type(char *cmd)
{
	if (builtin_cmd(cmd))
	{
		return (1);
	}
	return (0);
}
