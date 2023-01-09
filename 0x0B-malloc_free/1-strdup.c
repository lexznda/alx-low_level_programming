#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to a new spaces
 * @str: the string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, lenght = 0;

	if (str == NULL)
		return (NULL);
	for (lenght = 0; str[lenght] != '\0'; lenght++)
	{
		lenght++;
	}
	ptr = malloc(sizeof(char) * (lenght + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = i; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
