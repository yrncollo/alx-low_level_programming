#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of list
 * @idx: index
 * @n: value to insert
 *
 * Return: pointer to list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* declarations */
	dlistint_t *location;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	/* check for NULL */
	if (!h || !new)
		return (new ? free(new), NULL : NULL);
	/* assign some things to new */
	location = *h;
	new->n = n;
	/* if index is 0 */
	if (!idx)
	{
		new->prev = NULL;
		new->next = location ? location : NULL;
		if (location)
		{
			location->prev = new;
		}
		return (*h = new);
	}
	/* otherwise, move to place before index and install new node */
	for (; location; location = location->next, idx--)
	{
		if (idx - 1 == 0)
		{
			new->prev = location;
			new->next = location->next;
			if (new->next)
				new->next->prev = new;
			location->next = new;
			return (new);
		}
	}
	/* if all else fails, free new & return NULL */
	return (free(new), NULL);
}
