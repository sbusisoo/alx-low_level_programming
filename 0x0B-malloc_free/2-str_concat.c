#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a funcdtion tha concatenates strings
 * @s1: the string
 * @s2: the second string
 * Return: null if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, cl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = cl = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[cl] != '\0')
		cl++;
	conct = malloc(sizeof(char) * (j + cl + 1));

	if (conct == NULL)
		return (NULL);
	j = cl = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}
	while (s2[cl] != '\0')
	{
		conct[j] = s2[cl];
		j++;
		cl++;
	}
	conct[j] = '\0';
	return (conct);
}
