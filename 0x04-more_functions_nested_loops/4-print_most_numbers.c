#include "main.h"

/**
  * print_most_numbers - a function that prints the numbers, from 0 to 9
  * doesnt print 2 and 4
  *
  * Return: Always return 0 on success
  *
  */
void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		if ((num != 4) && (num != 2))
			_putchar('0' + num);
		num++;
	}
	_putchar(10);
}
