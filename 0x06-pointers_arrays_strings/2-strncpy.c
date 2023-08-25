#include "main.h"
/**
 * *_strncpy - a function that copies a string
 * @dest: a string
 * @src: the  second string
 * @n: no. of bytes
 * Return: a string copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int v;

	v = 0;
	while (v < n && src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}
