#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
	DIR *dir;
	struct dirent *entry;

	dir = opendir("./");
	
	if (dir == NULL)
		perror("opendir() error");
	else
	{
		printf("Contents of directory: ");
		while ((entry = readdir(dir)) != NULL)
			printf(" %s\n" , entry->d_name);
		closedir(dir);
	}
	return (0);
}
