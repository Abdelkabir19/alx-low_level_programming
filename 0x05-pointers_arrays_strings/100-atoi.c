#include "main.h"
/**
 * _atoi- check the code
 *
 *@s: pkorki
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int j = 0, i, c = 0, l = 1;

	while ((*s < '0' || *s > '9') && (*s != '\0'))
		s++;
	if (*s != '\0')
	{
		while (*s >= '0' && *s <= '9' && *s != '\0')
		{
			j++;
			s++;
		}
		for (i = 0; i < j; i++)
		{
			s--;
			c += (*s - '0') * l;
			l *= 10;
		}
		if (s != 0)
		{
			s--;
			if (*s == '-')
				c *= -1;
			s++;
		}
	} else
		c = 0;
	return(c);
}
