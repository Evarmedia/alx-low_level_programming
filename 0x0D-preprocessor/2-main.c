#include <stdio.h>

/**
  * main - a program that prints name of file it was comilled from
  *
  * Return: void
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
