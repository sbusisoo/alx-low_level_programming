#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates anarray of characters
 * @size: the size of array
 * @c: characters
 * Return: null if 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
