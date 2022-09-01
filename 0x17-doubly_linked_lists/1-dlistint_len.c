#include "lists.h"

/**
 * dlistint_len - get length of a list
 * @h: list
 *
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *head;

	if (h == NULL)
		return (count);
	head = malloc(sizeof(dlistint_t));
	if (head == NULL)
		exit(1);
	*head = *h;
	while (head->prev != NULL)
		head = head->prev;
	while (head->next != NULL)
	{
		head = head->next;
		count++;
	}
	count++;
	return (count);
}
