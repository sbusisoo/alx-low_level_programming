#include "main.h"
/**
 * *_strncat - a function that concatenates 2 strings
 * @dest: the string
 * @src: second string
 * @n: bytes size
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int g;
	int j;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[g] = src[j];
		g++;
		j++;
	}
	dest[g] = '\0';
	return (dest);
}
