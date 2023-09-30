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
	s--;
	if else (s != NULL)
	{
		s++;
		putchar(*s);
		*s = '\0';
		s = NULL;
		_print_rev_recursion(s);
	}
}
