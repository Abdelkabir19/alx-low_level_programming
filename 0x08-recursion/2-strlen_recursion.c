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

	return (0);
	if (*s)
	{
		_strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
