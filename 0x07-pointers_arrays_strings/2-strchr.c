#include "main.h"
/**
 * _strchr - check the code
 *
 *@c: fmmmk
 *@s: jmorj
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s != '\0')
		return(0);
	else
		return (s);
}
