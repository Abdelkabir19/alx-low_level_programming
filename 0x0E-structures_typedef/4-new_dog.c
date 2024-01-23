#include <stdlib.h>
#include "dog.h"
/**
*stelen - a function that gets a length of string
*@str: the string to get the length
*Return: length of astr
*/

int _strlen(const char *str)
{
	int length = 0;
	while (*str++)
		length++;
	return (length);
}
/**
* strcopy - a function that returns odest with a copy of a string from Osrc
* @src: string to copy
* @dest: copy string to here
* Return : dest
*/
char *_strcopy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; src++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
* new_dog - a function that creates a new dog
* @name: name of dog
* @age: age of doc
* @owner: dog owner
* Return: u
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/* if name and owner are empty and age is less than zero return null*/

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog) ;
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner)     + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
