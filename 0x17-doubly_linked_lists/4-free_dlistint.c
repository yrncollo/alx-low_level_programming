#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: start of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
