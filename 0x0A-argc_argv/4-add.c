#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 * checking_num - if there are digits
 * @str: the array
 * Return: 0 success
 */
int checking_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - a program that adds potive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int count;
	int strtoint;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (checking_num(argv[count]))

		{
			strtoint = atoi(argv[count]);
			sum += strtoint;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);

}
