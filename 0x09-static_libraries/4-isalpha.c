#include "main.h"
/**
 * _isalpha - a progarm that checkes if alphabet is a upper or lowercase
 * @c: characters that must be checked
 * Return: 1 if lowercase/ uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}

