#include "lists.h"
/**
 * add_node - adds new node to the head
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t nchar;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newNode->len = nchar;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
