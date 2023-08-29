#include "main.h"
/**
 * _strpbrk - a function that locates the first occurrence in the string
 * @s: the string
 * @accept: bytes in string
 * Return: 0 if no bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			return (s);
		}
		s++;
	}
	return ('\0');
}
