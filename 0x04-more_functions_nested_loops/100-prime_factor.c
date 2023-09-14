#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	long int i, j, k;

	k = 612852475143;
	for (i = 2; i < (612852475143 / 2 + 1); i++)
	{
		if (k % i == 0)
		{
			k = k / i;
			i--;
			j = i;
		}
	}
	printf("%ld", j + 1);
	putchar('\n');
	return (0);
}
