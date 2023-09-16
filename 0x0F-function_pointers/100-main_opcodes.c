#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the opcodes of its main functions
 * @argc: the number of arguments
 * @argv: the array of argumenets
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int bytes;
	int j;
	char *ar;

	if (argc != 2)
	{
		printf("Errors\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;
	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", ar[j]);
			break;
		}
		printf("%02hhx ", ar[j]);
	}
	return (0);
}
