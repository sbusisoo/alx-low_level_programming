#include <stdio.h>
/**
 * main - a prigram that prints number if arguments
 * @argc: number of aruguments
 * @argv: arrays of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
