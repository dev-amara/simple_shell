#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - split strif
 * Return: 0 on success
 */
int main()
{
	size_t size = 32;

	char s[1], i, j;
	char *token;
	
	char *str = (char *) malloc(size * sizeof(char));
	/* Get string and deliter from user*/
	printf("Enter String: ");
	scanf("%[^\n]%*c", str);
	printf("Enter delimeter:");
	scanf("%s", s);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == s[0]) /* Find the delimeter*/
			str[i] = '\n'; /*If its the delimeter split*/
	}
	for (j = 0; j < i; j++)
	{
		if (str[j] != '\0')
		{
			printf("%c", str[j]); /*Sprint the split string */
		}
		else
			printf("\n"); /*If end of file print newline*/
	}
	free(str);
	putchar('\n');
	return (0);
}
