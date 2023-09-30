#include "main.h"

/**
 *_print_rev_recursion - check the code
 *
 *@s: kjnbkjbioh
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		s++;
		n++;
	}
	putchar(*s);
	*s = '\0';
	s -= n;
	_print_rev_recursion(s);
}
