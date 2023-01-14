#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument array
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	/* new pointer to hold the string */
	char *ptr;
	int i, j, k, length = 0;

	/** keeping to the requiremnt*/
	if (ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == 0)
			return (NULL);
		for (j = 0; av[i][j] != 0; j++)
			length++;
		length++;
	}
	ptr = malloc(sizeof(char) * length + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = j = k = 0; k < length; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			ptr[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < length - 1)
			ptr[k] = av[i][j];
	}
	ptr[k] = '\0';

	return (ptr);
}
