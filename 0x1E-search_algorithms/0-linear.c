#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @size: size of the array
 * @array: input array
 * @value: value to search in
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int index_a;

	if (array == NULL)
		return (-1);

	for (index_a = 0; index_a < (int)size; index_a++)
	{
		printf("Value checked array[%u] = [%d]\n", index_a, array[index_a]);
		if (value == array[index_a])
			return (index_a);
	}
	return (-1);
}
