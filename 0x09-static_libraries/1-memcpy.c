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
	int q = 0;
	int j = n;

	for (; q < j; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
