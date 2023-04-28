#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node
 * @head: double pointer
 * @str: string to add in node
 *
 * Return: address of element or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *nuut;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	nuut = (list_t *) malloc(sizeof(list_t));
	if (nuut == NULL)
		return (NULL);
	nuut->str = (char *) malloc((len + 1) * sizeof(char));
	if (nuut->str == NULL)
	{
		free(nuut);
		return (NULL);
	}


	strcpy(nuut->str, str);
	nuut->len = len;
	nuut->next = (*head);
	(*head) = nuut;

	return (*head);
}
