#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * _strdup - duplicate to new mem space location
 * @str: char pointer
 * Return: pointer to duplicated string (success), NULL (failure)
 */
char *_strdup(char *str)
{
	char *bbb;
	int j = 0, t;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	bbb = malloc(sizeof(char) * (j + 1));

	if (bbb == NULL)
		return (NULL);

	for (t = 0; str[t] != '\0'; t++)
		bbb[t] = str[t];

	bbb[t] = '\0'; /* Null-terminate the copied string */

	return (bbb);
}
