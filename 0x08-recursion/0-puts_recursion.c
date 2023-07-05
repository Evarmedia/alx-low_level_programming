#include <stdio.h>
#include "main.h"
/**
  * _puts_recursion - print in reverse using recursion.
  *
  * @s: pointer parameter that takes char
  * Description: Recursion, a function that prints a string in reverse.
  * Return: Reveresed string
  *
  */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
