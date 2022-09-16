#include "main.h"

/**
  * _isdigit - is a function that checks for a digit(0 - 9)
  *
  * @c: takes in prameter c and checks
  *
  * Return: Always return 0 or 1
  *
  */
int _isdigit(int c)
{
	int tmp;

	if (c >= 48 && c < 58)

		tmp = 1;

	else
		tmp = 0;

	return (tmp);
}
