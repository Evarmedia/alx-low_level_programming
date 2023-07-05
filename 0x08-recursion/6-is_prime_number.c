#include <stdio.h>
#include "main.h"

/**
  * myprime - checks n to 1
  * @a: same as n
  * @b: param to check n to 1
  *
  * Return: 1 on success and 0 otherwise
  */
int myprime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (myprime(a, b + 1));
}
/**
  * is_prime_number - checks if input is a prime number
  *
  * @n: number param
  *
  * Return: 1 if input is prime otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (myprime(n, 2));
}
