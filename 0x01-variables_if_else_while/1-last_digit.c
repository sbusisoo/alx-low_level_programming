#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program that prints out a randim number each time executed
 * Return: 0
 */
int main(void)
{
	int n, b;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;

	printf("Last digit of %d is %d and is ", n, b);
	if (b > 5)
		printf("greater than 5\n");
	else if (b == 0)
		printf("0\n");
	else 
		printf("less than 6 and not 0\n");
	return (0);
/* 22, 12 17*/
}

