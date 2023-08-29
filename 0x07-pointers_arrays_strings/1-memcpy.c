#include "main.h"
/**
 * *_memcpy - a functions that copies memory area
 * @dest: memory area
 * @src: memory area one
 * @n: the bytes
 * Return: to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int j = n;

	for (; v < j; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}
