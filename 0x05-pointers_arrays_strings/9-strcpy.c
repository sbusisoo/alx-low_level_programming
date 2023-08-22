#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed by src
 * @dest: value of buffer, copy to
 * @src: the string, copy from
 * Return: the pointer set to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int g = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; g < i; g++)
	{
		dest[g] = src[g];
	}
	dest[i] = '\0';
	return (dest);
}
