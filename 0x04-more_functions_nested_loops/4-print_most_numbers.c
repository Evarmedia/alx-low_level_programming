#include "main.h"

/**
  * print_numbers - function that prints the aphpabets
  *
  * Return: Always return 0 on success
  *
  */
void print_numbers(void)
{
	char num;

	num = 48;
	for (num = 48; num < 58; num++)
	{
		_putchar(num);
		if ((num == 50) || (num == 52))
			continue;
		num++;
	}
	_putchar(10);
}
