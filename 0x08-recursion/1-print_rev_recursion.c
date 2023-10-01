#include "main.h"
/**
 *_print_rev_recursion - check the code
 *
 *@s: kjnbkjbioh
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	putchar(*s);
	*s = '\0';
	if (s != s[0])
	{
		s = s[0];
		_print_rev_recursion(s);
	}
}
