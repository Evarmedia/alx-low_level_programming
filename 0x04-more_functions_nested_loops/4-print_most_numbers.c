#include "main.h"

/**
  * print_most_umbers - function that prints the numbers
  * doesnt print 2 and 4
  *
  * Return: Always return 0 on success
  *
  */
void print_most_numbers(void)
i{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2)
			continue;
		else if (num == 4)
			continue;
			_putchar( '0' + num);
	}
	_putchar(10);
}
