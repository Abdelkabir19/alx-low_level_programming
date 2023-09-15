#include "main.h"
/**
* print_number - check the code
*
*@n: jghhr
*/
void print_number(int n)
{
	unsigned int k, s, i, l = 1, r = 0;

	if (n >= 0)
	{
		s = k = n;
	}
	else
	{
		_putchar('-');
		n = s = k = n * -1;
	}
	while (k >= 1)
	{
		k /= 10;
		r++;
		l *= 10;
	}
	l /= 10;
	for (i = 1; i < r; i++)
	{
		n = (s / l) % 10;
		_putchar(n + '0');
		l /= 10;
	}
	_putchar(s % 10 + '0');
}
