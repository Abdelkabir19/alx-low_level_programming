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
	int n = 0;

	dest = src;
	while (*src != '\0')
	{
		n++;
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
