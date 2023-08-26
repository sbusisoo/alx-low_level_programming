#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase, but q and e
 * Return: 0 success
 */
int main(void)
{
	int j;

	for (j = 97; j < 123; j++)
	{
		if (j != 101 && j != 133)
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
