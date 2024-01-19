#include <stdio.h>
#include <stdlib.h>
/**
*main - ngiu
*@argc: knjtr
*@argv: ijijtr
*
*Return: mkjimm
*/
int main(int argc, char *argv[])
{
	int a, b, c, d, m, s;

	if (argc != 2)
		return (printf("Error\n"), 1);
	s = atoi(argv[1]);
	if (s <= 0)
		printf("0\n");
	else
	{
		a = s / 25;
		b = (s - a * 25) / 10;
		c = (s - a * 25 - b * 10) / 5;
		d = (s - a * 25 - b * 10 - c * 5) / 2;
		m = a + b + c + d + s - a * 25 - b * 10 - c * 5 - d * 2;
		printf("%d\n", m);
	}
	return (0);
}
