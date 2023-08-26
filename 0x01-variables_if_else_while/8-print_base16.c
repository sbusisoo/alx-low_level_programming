#include <stio.h>
/**
 * main - a program that prints numbers of base of 16 in low case
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
