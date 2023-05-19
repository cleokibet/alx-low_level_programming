#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @head: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @i: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int i)
{
	dlistint_t *tmp = *head, *new;

	if (idx == 0)
		return (add_dnodeint(head, i));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(head, i));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->i = i;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
