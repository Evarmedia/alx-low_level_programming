#include "main.h"

/**
  * print_numbers - a function that prints the numbers, from 0 to 9
  *
  * Return: Always return 0 on success
  *
  */
void print_numbers(void)
{
	char num;

	num = 48;
	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar(10);
}
