#include "main.h"
/**
 * *cap_string - a function that capitalizes string
 * @str: string to be capitalized
 * Return: changed string
 */
char *cap_string(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		while (!(str[ind] >= 'a' && str[ind] <= 'z'))
			ind++;
		if (str[ind - 1] == ' ' ||
		    str[ind - 1] == '\t' ||
		    str[ind - 1] == '\n' ||
		    str[ind - 1] == ',' ||
		    str[ind - 1] == ';' ||
		    str[ind - 1] == '.' ||
		    str[ind - 1] == '!' ||
		    str[ind - 1] == '?' ||
		    str[ind - 1] == '"' ||
		    str[ind - 1] == '(' ||
		    str[ind - 1] == ')' ||
		    str[ind - 1] == '{' ||
		    str[ind - 1] == '}' ||
		    ind == 0)
			str[ind] -= 32;
		ind++;
	}
	return (str);
}
