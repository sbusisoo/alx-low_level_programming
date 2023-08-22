#include "main.h"
/**
 * _puts - a program that prints string
 * str: string that must printed
 * Return: new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
