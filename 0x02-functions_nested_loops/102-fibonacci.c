#include <stdio.h>
/**
 * main - a program that prints 50 Fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	int count;
	unsigned long fib1 = =, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib2 + fib2;
		printf("%lu", sum);

		fib2 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
