#include "lists.h"

/**
 * add_nodeint - adds a new node of a linked list in the beginning
 * @head: pointer of the first node
 * @n: data to insert
 *
 * Return: pointer to the node or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuut;

	nuut = malloc(sizeof(listint_t));
	if (!nuut)
		return (NULL);

	nuut->n = n;
	nuut->next = *head;
	*head = nuut;

	return (nuut);
}
