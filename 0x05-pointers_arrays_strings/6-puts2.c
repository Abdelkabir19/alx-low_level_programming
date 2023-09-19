#include "main.h"

/**
 * puts2 - check the code
 *
 *@str: gjijg
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		str++;
	}
	putchar('\n');
}

