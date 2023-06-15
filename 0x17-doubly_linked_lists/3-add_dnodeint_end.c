#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuut, *per;

	if (head == NULL)
		return (NULL);
	nuut = malloc(sizeof(dlistint_t));
	if (nuut == NULL)
		return (NULL);
	nuut->n = n;
	nuut->next = NULL;
	if (*head == NULL)
	{
		nuut->prev = NULL;
		*head = nuut;
		return (nuut);
	}
	per = *head;
	while (per->next != NULL)
		per = per->next;
	per->next = nuut;
	nuut->prev = per;
	return (nuut);
}
