#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
