#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, cp;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (cp = 0; cp < n; cp++)
	{
		dest[i + cp] = src[cp];
		if (src[cp] == '\0')
			cp = n;
	}

	return (dest);
}
