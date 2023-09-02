#include "main.h"
/**
 * _strcmp - a function that compares 2 things
 * @s1: input value
 * @s2: second input value
 * Return: s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
	return (0);
}
