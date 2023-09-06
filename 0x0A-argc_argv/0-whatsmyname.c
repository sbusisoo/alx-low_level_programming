#include "main.h"
#include <stdio.h>
/**
 * main - a function that prints its name
 * @argc: the agurment
 * @argv: the string arugment
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

