#include <stdio.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	long int k, i, a, s = 0, n = 1;

	for (i = 0; i < 50; i++)
	{
		k = s + n;
		s = n;
		n = k;
		a += k;
	}
	printf("%ld\n", a);
	return (0);
}
