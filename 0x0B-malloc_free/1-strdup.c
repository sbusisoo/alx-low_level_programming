#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to new allocated space in mem
 * @str: the new string
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	char *ab;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	ab = malloc(sizeof(char) * (j + 1));
	if (ab == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		ab[r] = str[r];
	return (ab);
}
