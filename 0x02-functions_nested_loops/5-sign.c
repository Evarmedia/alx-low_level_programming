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
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		printf(45);
		return (0);
	}
}
