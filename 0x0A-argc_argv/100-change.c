#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a prigram that prints a minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int num, b, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && num >= 0; b++)
	{
		while (num >= coins[b])
		{
			result++;
			num -= coins[b];
		}
	}
	printf("%d\n", result);
	return (0);
}
