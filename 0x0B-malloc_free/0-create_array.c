#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - prints buffer in hexa
 *
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	s = (char *)malloc(size * sizeof(char));
	while (*s != '\0')
	{
		*s = c;
		s++;
	}
	s -= size;
	return (s);

}
