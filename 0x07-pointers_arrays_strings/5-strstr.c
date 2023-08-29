#include "main.h"
/**
 * *_strstr - a function that locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: 0 if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *e = needle;

		while (*j == *e && *e != '\0')
		{
			j++;
			e++;
		}
		if (*e == '\0')
			return (haystack);
	}
return (0);
}
