#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 *@s: bjguyg
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s)
	{
		s[0] = 0;
		n = *s;
		s++;
		*s = n + 1;
		_strlen_recursion(s);
	}
	return(*s);
}
