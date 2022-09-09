#include <stdio.h>

/**
  * main - Entry point for the program
  * takes no arguments, all statements are in the main function
  *
  * Description - Program that prints alphabets in lower case
  *
  */
int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
