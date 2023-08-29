#include "main.h"
/**
 * *_strchr - a that locates a character
 * @s: the string
 * @c: the character
 * Return: null if nothing found
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
