#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function reallocates a memory block
 * @ptr: a pointer to memory
 * @old_size: the previous memory
 * @new_size: new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			ptr1[j] = old_ptr[j];
	}
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			ptr1[j] = old_ptr[j];
	}
	free(ptr);
	return (ptr1);
}
