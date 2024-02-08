#include "search_algos.h"

/**
 * recursive_search - function that searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @size: size of the array
 * @array: input array
 * @value: value to search in
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t f_half = size / 2;
	size_t ind_i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (ind_i = 0; ind_i < size; ind_i++)
		printf("%s %d", (ind_i == 0) ? ":" : ",", array[ind_i]);

	printf("\n");

	if (f_half && size % 2 == 0)
		f_half--;

	if (value == array[f_half])
		return ((int)f_half);

	if (value < array[f_half])
		return (recursive_search(array, f_half, value));

	f_half++;

	return (recursive_search(array + f_half, size - f_half, value) + f_half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
