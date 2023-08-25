#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints a[2] = 98
 * Return: void
 */
void main(void)
{
	int l;
	int a[5];
	int *p;

	  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
*(p + 5) = 98;
  /* ...so that this prints 98\n */


	a[2] = 1024;
	p = &l;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
