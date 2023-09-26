#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if string is palindrime
 * @s: string to reverse
 * Return: 1 or 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns leght of string
 * @s: string to cal lenght
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the char recursively
 * @s: string to check
 * @i: the iterator
 * @len: len if string
 * Return: 1 if palindrime, otherwise 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
