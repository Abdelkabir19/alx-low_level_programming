#include "main.h"
/**
  *binary_to_uint - convertir a binary to decimal
  *
  *@b: jtyjt
  *
  *Return : ljkjiof
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0, e = 1, n = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		b++;
		n++;
	}
	while (n != 0)
	{
		b--;
		n--;
		if (*b != '0' && *b != '1')
			return (0);
		d += (*b - '0') * e;
		e *= 2;
	}
	return (d);
}
