#include "lists.h"

/**
 * add_dnodeint - add node at beginning of list
 * @head: head of list
 * @n: value to add
 *
 * Return: new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declarations */
	dlistint_t *new = malloc(sizeof(dlistint_t));

	/* check for null && malloc fail, free new if it exists, return null */
	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	/* assign some things to new node */
	new->n = n;
	new->prev = NULL;
	/* if no other nodes, make this one the ending node as well */
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	/* otherwise, fit it in nicely */
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
