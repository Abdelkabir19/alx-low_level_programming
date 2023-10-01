#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 *@s: bjguyg
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s[0] = 0;
		s++;
		*s = s-- + 1;
		_strlen_recursion(s);
	}
	return(*s);

