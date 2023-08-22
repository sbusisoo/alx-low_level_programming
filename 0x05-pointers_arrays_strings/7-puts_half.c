#include "main.h"
/**
 * puts_half - a function that prints half a string
 * @str: that string
 * Return: void
 */
void puts_half(char *str)
{
	int b, n, lon;

	lon = 0;
	for (b = 0; str[b] != '\0'; b++)
		lon++;
	n = (lon / 2);

	if ((lon % 2) == 1)
		n = ((lon + 1) / 2);
	for (b = n; str[b] != '\0'; b++)
		putchar(str[b]);
	putchar('\n');
}
