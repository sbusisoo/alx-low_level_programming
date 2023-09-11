#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all arguments of program
 * @ac: intger input
 * @av: pointer array
 * Return: a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int j, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (n = 0; av[j][n]; n++)
		{
			str[r] = av[j][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
