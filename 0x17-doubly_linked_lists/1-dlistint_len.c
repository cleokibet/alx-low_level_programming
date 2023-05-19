include "lists.h"

/**
 * dlistint_len - print doubly linked list
 * @head: list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t nodes = 0;

	for (; head; nodes++)
		head = head->next;

	return (nodes);
}
