#include <stdio.h>

/**
  * main - entry point of the program
  *
  * Takes no arguments
  *
  * Return: program always returns 0(success)
  */
int main(void)
{
	char nbase_16;

	for (nbase_16 = 48; nbase_16 <= 57; nbase_16++)
	{
		putchar(nbase_16);
	}
	for (nbase_16 = 97; nbase_16 <= 102; nbase_16++)
	{
		putchar(nbase_16);
	}
	putchar('\n');

	return (0);
}
