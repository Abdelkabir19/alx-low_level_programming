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
	int i = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			i++;
			accept[i];
		}
		i = 0;
		s++;
	}
	return ('\0');
}
