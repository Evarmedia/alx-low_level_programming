#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: a is the array
 * @n: Where n is the number of elements of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int x = 0, Aux;

	n = n - 1;
	while (x <= n)
	{
		Aux = a[x];
		a[x++] = a[n];
		a[n--] = Aux;
	}
}
