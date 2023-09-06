#include <stdio.h>
/**
 * main - a program that prints all arugemnts it gets
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
