#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node 
 * @head: double pointer
 * @str: string to add in node
 *
 * Return: address or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nuut;
	unsigned int len = 0;

	while (str[len])
		len++;

	nuut = malloc(sizeof(list_t));
	if (!nuut)
		return (NULL);

	nuut->str = strdup(str);
	nuut->len = len;
	nuut->next = (*head);
	(*head) = nuut;

	return (*head);
}
