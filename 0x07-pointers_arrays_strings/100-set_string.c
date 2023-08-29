#include "main.h"
/**
 * set_string - a function that sets value of pointer to char
 * @s: pointer to pointer
 * @to: pointer to character
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
