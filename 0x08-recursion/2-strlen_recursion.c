#include "main.h"
/**
 * _strlen_recursion - a function that returns the lenght of string 
 * @s: the string
 * Return: leght of string
 */
int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);
}
