#include "main.h"
/**
 * _strlen - a function a that returns leght of string
 * @s: the string
 * Return: the lenght
 */
int _strlen(char *s)
{
	int logi = 0;

	while (*s != '\0')
	{
		logi++;
	s++;
	}
	return (logi);
}
