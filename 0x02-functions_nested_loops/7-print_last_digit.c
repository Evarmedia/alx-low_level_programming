#include "main.h"

/**
  * print_last_digit - is a function that checks if character alphabet
  *
  * @n: takes in int c and checks
  *
  * Return: Always return 0 on success
  *
  */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (n < 0)
		res *= -1;
	_putchar(res + '0');
	return (res);
}
