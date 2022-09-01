#include "lists.h"

/**
 * sum_dlistint - sum of values in list
 * @head: head of list
 *
 * Return: sum of elements in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		exit(1);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
