#include "main.h"
/**
 * _strcmp - check the code
 *
 *@s1: mkbm
 *@s2: mnkomih
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	c = *s1 - *s2;
	if (c < 0)
		c *= -1;
	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		c *= -1;
	return (c);
}
