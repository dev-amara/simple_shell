#include <stdio.h>
#include <stdlib.h>

/**
 * main - get input from stream
 *
 * Return: Always 0
 */

int main()
{
	char *str; /* character array pointer */
	size_t chars;
	size_t size = 10; /*Initial size of character array*/

	str = (char *) malloc(size); /* allocate memory for array*/
	
	if (str == NULL)
	{
		printf("unable to allocate memroy");
		exit(1);
	}
	else
	{
		char **str_ptr = &str; /*double pointer to array*/
		printf("($) ");
		chars = getline(str_ptr, &size, stdin);
		printf("%s", str);
		return (0);
	}
}
