#include "lists.h"

/**
 * print_dlistint - print list
 * @h: list
 *
 * Return: no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *head = malloc(sizeof(dlistint_t));

	if (head == NULL)
		exit(1);
	if (h == NULL)
	{
		free(head);
		return (count);
	}
	*head = *h;
	if (head == NULL)
		return (count);
	while (head->prev != NULL)
		head = head->prev;
	while (head->next != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	printf("%d\n", head->n);
	count++;
	return (count);
}
