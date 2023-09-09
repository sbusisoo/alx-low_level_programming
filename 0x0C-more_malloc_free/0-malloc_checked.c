#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory with malloc
 * @b: a pointer
 * Return: a pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
