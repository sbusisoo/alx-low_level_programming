#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates 2 strings
 * @s1: the string
 * @s2: the second string
 * @n: btyes in string
 * Return: NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int j = 0, i = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		c = malloc(sizeof(char) * (len1 + n + 1));
	else
		c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!c)
		return (NULL);
	while (i < len1)
	{
		c[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		c[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		c[i++] = s2[j++];
	c[i] = '\0';
	return (c);
}
