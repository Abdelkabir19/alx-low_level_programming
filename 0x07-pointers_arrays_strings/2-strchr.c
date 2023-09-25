#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;
	s--;
	return (s);
}
