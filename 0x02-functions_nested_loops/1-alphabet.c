#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int t;

	for (t = 'a'; t <= 'z'; t++)
	{	
		_putchar(t);
	}
	_putchar('\n');

	print_alphabet();
}
