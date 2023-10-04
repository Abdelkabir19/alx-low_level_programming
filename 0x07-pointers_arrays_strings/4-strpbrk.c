#include "main.h"
/**
 * _strpbrk - check the code
 *
 *@accept: gnjhher
 *@s: jvjh
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s != *accept)
			*s = '\0';
		else
			return (s);
		s++;
	}
}
