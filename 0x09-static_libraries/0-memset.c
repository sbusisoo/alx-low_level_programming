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
	for (int t = 0; n > 0; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
