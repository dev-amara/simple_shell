#include <stdio.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t PID, PPID;

	PID = getpid();
	PPID = getppid();
	printf("PID: %u\n PPID: %u\n", PID, PPID);
	return (0);
}
