#include "main.h"
/**
 * is_palindrome - check the code
 *
 *@s: jgjr
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
		return (ak(s, 0, _strlen_recursion(s, 0)));
}
/**
  *_strlen_recursion - hkljj
  *
  *@s: klhk
  *@n: klmt
  *Return: mgjt
  */
int _strlen_recursion(char *s, int n)
{
	if (*s != '\0')
		_strlen_recursion(s + 1, n + 1);
	else
		return (n);
}
/**
  * ak - jghjgj
  *
  *@s: lkñlk
  *@n: klmfklgjre
  *Return: klhjtjh
  */
int ak(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);
	if (i >= n )
		return (1);
	return ( ak(s, i + 1, n - 1));
}