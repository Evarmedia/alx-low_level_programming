#include <stdio>
#include "main.h"
/**
  * mysqrt - a func to check 1 to n
  * @a: same as n
  * @b: number that iterates from 1 to n
  *
  * Return: 1 on success
  */
int mysqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (mysqrt(a, b + 1));
}
/**
  * _sqrt_recursion - returns the natural root of a num
  *
  * @n: number param
  *
  * Return: square root of a num.
  */
int _sqrt_recursion(int n)
{
	return (mysqrt(n, 1));
}
