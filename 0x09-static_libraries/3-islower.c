#include "main.h"
/**
 * _islower - a program that chaecks for lowercase
 * @c: the characters that must be checked
 * Return: 0 for lowercase or 1 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
