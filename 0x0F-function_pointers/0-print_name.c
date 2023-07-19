#include "function_pointers.h"
/**
  * print_name - prints name
  * @name: name to be printed
  * @f: function pointer
  *
  *
  * Return: 0.
  */

void print_name(char *name, void (*f)(char *))
{
	if (f == '\0')
		return;
	f(name);
}
