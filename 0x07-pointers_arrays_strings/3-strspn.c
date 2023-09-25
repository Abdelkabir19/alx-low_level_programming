#include "main.h"

/**
 * _strspn- check the code
 *
 *@s: kgnejiogjerio
 *@accept: mjtiohj
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, b = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				*accept == '\0';
				b += 1;
			}
			accept++;
		}
		s++;
		i++;
	}
	return (i -b);
}
