#include "main.h"

/**
  * print_sign - is a function that checks if character alphabet
  *
  * @n: takes in int n and checks
  *
  * Return: Always return 0 on success
  *
  */
int print_sign(int n)
{
	if (n > 0)
		printf("+");
		return (1);

	else if (n == 0)
		printf("0");
		return (0);
	else
		printf("-");
		return (0);
}
