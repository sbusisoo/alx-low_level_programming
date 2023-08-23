#include "main.h"
/**
 * *_strcat - a function that concatennates on two things
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int g, j;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[g] = src[j];
		g++;
		j++;
	}
	dest[g] = '\0';
	return (dest);
}
