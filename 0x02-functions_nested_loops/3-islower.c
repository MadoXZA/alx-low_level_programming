#include"main.h"
/**
 * _islower - Shows 1 if the output is a lowercase, Another case, shows 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase character, 0 for the rest.
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
