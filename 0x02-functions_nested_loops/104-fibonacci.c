#include <stdio.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	long double k, i, s = 0, n = 1;

	for (i = 0; i < 98; i++)
	{
		k = s + n;
		s = n;
		n = k;
		printf("%0.0Lf, ", k);
	}
	printf("%0.0Lf, ", k);
	return (0);
}
