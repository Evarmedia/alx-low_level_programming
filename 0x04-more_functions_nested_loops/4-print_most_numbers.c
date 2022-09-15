#include "main.h"

/**
  * print_most_umbers - function that prints the aphpabets
  *
  * Return: Always return 0 on success
  *
  */
void print_most_numbers(void)
{
	char num;

	for (num = 48; num < 58; num++)
	{
		if (num == 50)
			continue;
		else if (num == 52)
			continue;
			_putchar(num);
	}
	_putchar(10);
}
