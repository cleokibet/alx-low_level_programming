#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @head: list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t nodes = 0;

	for (; head; nodes++, head = head->next)
		printf("%d\n", head->n);

	return (nodes);
}
