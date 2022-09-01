#include <stdio.h>
#include <stdlib.h>

/**
 * main - print arguments
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused)) ac, char **av)
{
	int i;
	int len = atoi(av[1]);

	for (i = 0; i < len+ + 2; i++)
		printf("%s\n", av[i]);
	return (0);
}


