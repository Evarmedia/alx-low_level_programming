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
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
