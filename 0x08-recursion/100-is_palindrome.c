#include "main.h"

/**
* palindo1 - obtains length of a
* @a: string
* @l: integer to count length
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int palindo1(char *a, int l)
{
if (*a == 0)
return (l - 1);
return (palindo1(a + 1, l + 1));
}
/**
* palindo2 - compares string vs string reverse
* @a: string
* @l: length
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int palindo2(char *a, int l)
{
if (*a != *(a + l))
return (0);
else if (*a == 0)
return (1);
return (palindo2(a + 1, l - 2));
}
/**
* is_palindrome - checks if a string is a palindrome
* @s: string to evaluate
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int is_palindrome(char *s)
{
int l;

l = palindo1(s, 0);
return (palindo2(s, l));
}
