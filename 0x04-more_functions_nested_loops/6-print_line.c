#include "main.h"

/**
  * print_most_numbers - function that prints the numbers
  * doesnt print 2 and 4
  *
  * Return: Always return 0 on success
  *
  */
void print_line(int n)
{
	int line;

	line = 0;
	if (n > 0)
	{
		while (line < n)
		{
			_putchar('_');
			line++;
		}
	}
	_putchar(10);
}
