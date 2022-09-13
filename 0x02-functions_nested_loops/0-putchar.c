#include <stdio.h>
#include "main.h"

/**
  * main - Entry point of the program"
  *
  * Return: Always returns 0(success)
  */
int _putchar(char c)
{ 
	return (write(1, &c, 1));
}

int main(void)
{
	printf("_putchar\n");
	return (0);
}
