#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with bytes
 * @s: memory area
 * @a: character to copy
 * @v: number of times copy
 * Return: pointer to memory
 */
char *_memset(char *s, char a, unsigned int v)
{
	unsigned int j;

	for (j  = 0; j < v; j++)
	{
		s[j] = a;
	}
	return (s);
}
/**
 * _calloc - a function thatt allocates memory for array
 * @nmemb: the array
 * @size: the elements bytes
 * Return: NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
