#include "main.h"

/**
  * print_alphabet_x10 - fuction that prints alphabets 10 times.
  *
  * Return: Always return 0 on success
  *
  */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 1;
	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
		i++;
	}
}
