#include <stdio.h>
#include "main.h"
/**
  * mypalindrome1 - gets the length of a
  *
  * @a: string param
  * @c: counter
  *
  * Return: 1 on success otherwise 0
  */
int mypalindrome1(char *a, int c)
{
	if (*a == 0)
		return (c - 1);
	return (mypalindrome1(a + 1, c + 1));
}
/**
  * mypalindrome2 - checks str against rev str
  *
  * @a: str
  * @c: len
  *
  * Return: 1 on sucess, -1 otherwise
  */
int mypalindrome2(char *a, int c)
{
	if (*a != *(a + 1))
		return (0);
	else if (*a == 0)
		return (1);
	return (mypalindrome2(a + 1, c - 2));
}
/**
  * is_palindrome - checks if a string is a palindrome
  *
  * @s: str param
  *
  * Return: 1 on success otherwise -1;
  *
  */
int is_palindrome(char *s)
{
	int c = mypalindrome1(s, 0);
	return (mypalindrome2(s, 1));
}
