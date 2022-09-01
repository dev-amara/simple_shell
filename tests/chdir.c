#include <stdio.h>
#include <unistd.h>

int main()
{
	char s[100];

	/*print current working directory*/
	printf("%s\n", getcwd(s, 100));
	/* change directory*/
	chdir("/bin");

	/*print current working directory*/
	printf("%s\n", getcwd(s, 100));
	return (0);
}
