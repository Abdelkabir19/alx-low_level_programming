#include <stdio.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long int k, i, s = 0, n = 1;

	for (i = 0; i < 98; i++)
	{
		k = s + n;
		s = n;
		n = k;
		if (i != 97)
			printf("%zu, ", k);
	}
	printf("%zu\n", k);
	return (0);
}
