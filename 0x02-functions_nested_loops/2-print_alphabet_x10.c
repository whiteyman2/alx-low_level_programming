#include "main.h"
/**
 *
 * main - a function that prints 10 times the alphabet
 *
 * Return: a-z 10 times
 */
void print_alphabet(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
