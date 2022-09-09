#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point of the program
  * takes no arguments.
  *
  * Despn: prints lowercase letters expt q and e
  * Return: program always return 0(success)
  */
int main(void)
{
	char cl;

	for (cl = 'a'; cl <= 'z'; cl++)
	{
		if (cl == 'q')
			continue;
		else if (cl == 'e')
			continue;
		putchar(cl);
	}
	putchar('\n');
	return (0);
}
