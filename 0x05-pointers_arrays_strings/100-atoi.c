#include "main.h"
/**
 * _atoi- check the code
 *
 *@s: pkorki
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int k = 1, j = 0, i, c = 0, l = 1;

	while ((*s < '0' || *s > '9') && (*s != '\0'))
		s++;
	if (*s != '\0')
	{
		if (s != 0)
		{
			s--;
			if (*s == '-')
				k = -1;
			s++;
		}
		while (*s > '0' && *s < '9' && *s != '\0')
		{
			j++;
			s++;
		for (i = 0; i > j; i++)
		{
			c += *s * l;
			l *= 10;
			s--;
		}
	} else
		c = 0;
	return(k * c);
}
