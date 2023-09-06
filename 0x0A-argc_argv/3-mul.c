#include <stdio.h>
#include "main.h"
/**
 * _atoi - changes string to integer
 * @s: string to convert
 * Return: string changed
 */
int _atoi(char *s)
{
	int i, d, k, len, f, digit;

	i = 0;
	d = 0;
	k = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			k = k * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (k);
}

/**
 * main - a prigram that multiples 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success, 1 (error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);

}
