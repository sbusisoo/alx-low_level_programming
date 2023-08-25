#include "main.h"
#include <stdio.h>
/**
 * *rot13 - a function that encodes a string
 * @s: points to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int v;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (v = 0; s[v] != '\0'; v++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[v] == data1[j])
			{
				s[v] = data1[j];
				break;
			}
		}
	}
	return (s);
}
