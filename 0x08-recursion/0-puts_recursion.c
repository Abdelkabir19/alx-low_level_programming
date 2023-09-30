#include "main.h"

/**
 * _puts_recursion - check the code
 *
 *@s: iogjioer
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
}
