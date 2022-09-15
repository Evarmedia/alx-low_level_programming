#include "main.h"

/**
  * print_numbers - function that prints the aphpabets
  *
  * Return: Always return 0 on success
  *
  */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2)
			continue;
		else if (num == 4)
			continue;
			_putchar(num);
	}
	_putchar(10);
}
