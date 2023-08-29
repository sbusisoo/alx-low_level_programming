#include "main.h"
/**
 * *_memset - a function that fills memory with byte
 * @n: first byte
 * @s: memory area pointed
 * @b: constant byte
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
