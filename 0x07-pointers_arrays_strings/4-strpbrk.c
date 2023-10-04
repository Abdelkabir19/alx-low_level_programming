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
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = accept[0];
		s++;
	}
}
