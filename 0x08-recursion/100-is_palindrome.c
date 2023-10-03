#include "main.h"
/**
 * is_palindrome - check the code
 *
 *@s: jgjr
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
		return (ak(s, 0, 0));
}
/**
  * ak - jghjgj
  *
  *@s: lkñlk
  *@n: klmfklgjre
  *@i: kljlriej
  *Return: klhjtjh
  */
int ak(char *s, int i, int n)
{
	int j;

	if (*s != '\0' && i == 0)
		ak(s + 1, i, n + 1);
	if (n % 2)
		j = n;
	else
		j = n + 1;
	if (s[i] == s[n - 1 - i] && i + 1 < j / 2)
		ak(s, i + 1, n);
	if (i == j / 2)
		return (1);
	else
		return (0);
}
