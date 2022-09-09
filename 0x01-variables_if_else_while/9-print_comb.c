#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point of the program
  *
  * Takes no arguments
  *
  * Return: program always returns 0(success)
  */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
