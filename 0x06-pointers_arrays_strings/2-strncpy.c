#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @n: size of character to contatenate
 * @dest: s1
 * @src: s2
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

		for (j = 0; j < n && src[j] != '\0'; j++)
			dest[j] = src[j];
		for ( ; j < n; j++)
			dest[j] = '\0';
	return (dest);
}
