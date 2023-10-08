#include "main.h"
#include <stdio.h>

/**
 * *malloc_checked- check the code
 *
 *@b: ojjd
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exist(98);
	return (m);
}
