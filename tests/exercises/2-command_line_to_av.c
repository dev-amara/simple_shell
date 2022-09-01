#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - split strif
 * Return: 0 on success
 */
int main()
{
	char str[32];

	char s[2];
	char *token;


	printf("Enter String: ");
	scanf("%[^\n]%*c", str);
	printf("Enter delimeter:");
	scanf("%s", s);

	/*Get the first token*/
	token = strtok(str, s);

	/*Walk through other tokens*/
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, s);
	}
	return (0);
}
