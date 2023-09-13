#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * _strcpy - copies the string at src
 * @dest: pointer to buffer to copy string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
/**
 * new_dog - a function that creates new dog
 * @name: the name
 * @age: its age
 * @owner: the owner
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);

}
