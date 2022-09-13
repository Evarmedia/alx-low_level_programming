#include "main.h"

/**
  * print_sign - is a function that checks if character alphabet
  *
  * @n: takes in int n and checks
  *
  * Return: Always return 0 on success
  *
  */
int print_sign(int n)
{
	int tmp;

	if (n > 0)
	{
		_putchar(43);
		tmp = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		tmp = 0;
	}
	else
	{
		_putchar(45);
		tmp = -1;
	}
	return (tmp);
}
