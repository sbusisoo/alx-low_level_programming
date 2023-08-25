#include "main.h"
#include <stdio.h>
/** 
 * main - a program that prints a[2] = 98
 * Return: void
 */
void main(void)
{
	int n;
	int l[5];
	int *p;

	l[2] = 1024;
	p = &n;
	printf("l[2] = %d\n", l[2]);
	return (0);
}
