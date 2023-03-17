#include<stdio.h>

/**
 * main - prints the alphabet in lowercast, and then in uppercast
 * followed by a new line
 * Return: Always (0)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
