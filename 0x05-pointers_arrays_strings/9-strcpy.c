#include "main.h"

/**
 * *_strcpy - check the code
 *
 *@src: njgjtiuj
 *@dest: jgijj
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n++;
	}
	src -= n;
	return (src);
}
