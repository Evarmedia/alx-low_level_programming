#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main- entry point og the program
  * takes no argument
  *
  * Description: determing if int is positve or negative usinf ifelse
  * Return: Program always return 0(success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{

		printf("%d is negative\n", n);
	}
	return (0);
}
