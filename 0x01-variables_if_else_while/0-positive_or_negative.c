#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

 /**
 * main- Entry point of th progam
 * program takes no arg.
 *
 * Description - uses if else to determine if an int is nagative or positve
 *
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

		printf("%d is nagative\n", n);
	}
	return (0);
}	
