#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - length
 * @s:para
 * Return:lrngth
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strcpy - function
 * @src:para
 * @dest:para
 * Return:pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - functopn
 * @name:1
 * @age:2
 * @owner:3
 * Return:dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
	{	return (NULL); }

	nw_dog->name = malloc(sizeof(char) * (l1 + 1));
	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	nw_dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (nw_dog->owner == NULL)
	{
		free(nw_dog);
		free(nw_dog->name);
		return (NULL);
	}
	_strcpy(nw_dog->name, name);
	_strcpy(nw_dog->owner, owner);
	nw_dog->age = age;

	return (nw_dog);
}
