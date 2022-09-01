#include "shell.h"

/**
 *concat_str - concatenate two strings
 *@dest: destination string
 *@src: source string
 *
 * Return: pointer to the resulting string
 */

char *concat_str(char *dest, char *src)
{
	int len, j;

	/*store the len of dest in the len variable*/
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	/*Append src to dest*/
	for (j = 0; src[j] != '\0'; ++j, ++len)
	{
		dest[len] = src[j];
	}
	/* Terminate the source str*/
	dest[len] = '\0';
	return (dest);
}
