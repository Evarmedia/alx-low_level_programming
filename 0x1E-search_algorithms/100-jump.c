#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int ind, ind_i, ind_j, prev;

	if (array == NULL || size == 0)
		return (-1);

	ind_i = (int)sqrt((double)size);
	ind_j = 0;
	prev = ind = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", ind, array[ind]);

		if (array[ind] == value)
			return (ind);
		ind_j++;
		prev = ind;
		ind = ind_j * ind_i;
	} while (ind < (int)size && array[ind] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, ind);

	for (; prev <= ind && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
