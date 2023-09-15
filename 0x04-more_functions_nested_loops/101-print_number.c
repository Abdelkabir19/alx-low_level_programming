#include "main.h"
/**
*print_number - jhjtru
*
*@n: jhiorji
*/
void print_number(int n)
{
	int x = n, digit, places = 1000000000;

	if (n < 0)/* E */
	{
		x = -n;
		_putchar('-');
	}
	if (n == 2147483647)
	{
			_putchar('2');
			_putchar('1');
			_putchar('4');
			_putchar('7');
			_putchar('4');
			_putchar('8');
			_putchar('3');
			_putchar('6');
			_putchar('4');
			_putchar('7');
	}
	else if (n == 0)/* A */
		_putchar('0');
	else
	{
		while (places > x)/* B */
			places /= 10;
		while (places > 0)
		{
			digit = x / places;/* C */
			_putchar((digit % 10) + '0');
			places /= 10;
		}
	}
}
