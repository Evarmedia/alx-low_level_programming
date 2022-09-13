#include "main.h"

/**
  * print_alphabet - function that prints the aphpabets
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
		ch++;
	}
	_putchar(10);
}
