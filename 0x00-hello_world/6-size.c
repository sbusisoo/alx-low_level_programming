#include <stdio.h>
/**
 * main - a program that prints the size of various types
 * Return:0 (Success)
 */
int main(void)
{
int  i;
long int b;
long long int d;
char c;
float f;

printf("Size of a char: %lu.\n byte(s)", (unsigned long)sizeof(c);)
printf("Size of a int: %lu.\n byte(s)", (unsigned long)sizeof(i));
printf("Size of a long int: %lu.\n byte(s)", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu.\n byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}

