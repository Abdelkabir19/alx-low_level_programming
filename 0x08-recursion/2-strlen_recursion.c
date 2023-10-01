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

	s[0] = 0;
	if (*s)
	{
		n = *s;
		_strlen_recursion(s + 1);
		*s = n + 1;
	}
	return (*s);
}
