# include "main.h"
/**
* print_last_digit - iojiotj
*
*@n: jhirjh
*Return: hgiehh
*/
int print_last_digit(int a)
{
	int i;
	int r;

	i = a % 10;
	if (i < 0)
	{
		i *= -1;
	}
	r = i * 11;
	return (r);
}
