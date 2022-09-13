#include "main.h"

/**
  * main - Entry point of the program 
  *
  * Return: Always return 0 on success
  *
  */
void print_alphabet(void)
{
	char ch;
	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
	}
	_putchar(10);
}
