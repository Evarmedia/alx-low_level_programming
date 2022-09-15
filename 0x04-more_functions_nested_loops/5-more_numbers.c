#include "main.h"

/**
  * print_numbers - function that prints the aphpabets
  *
  * Return: Always return 0 on success
  *
  */
void print_numbers(void)
{
	int num, i;

	for (i = 0; i <= 10; i++)
	{
		num = 0;
		while (num < 15)
		{
			_putchar('0' + num);
			num++;
			_putchar(10);
		}
	}
	_putchar(10);
}
