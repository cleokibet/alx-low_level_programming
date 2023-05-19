#include "lists.h"

/**
 * add_dnodeint - add a node to the head of a list
 * @head: pointer to head
 * @i: new node to add
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int i)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->i = i;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
