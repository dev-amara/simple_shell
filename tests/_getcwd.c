#include <unistd.h>
#include <stdio.h>
int main()
{
	char buf[255];
	
	if (getcwd(buf, sizeof(buf)) != NULL)
	{
		printf("Current wotking dir: %s\n", buf);
	}
	else
	{
		perror("getcdw() error");
		return (1);
	}
	return (0);
}
