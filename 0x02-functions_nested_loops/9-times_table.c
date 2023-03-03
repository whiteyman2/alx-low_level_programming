#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		int product = i * j;

		if (product > 9)
		{
			 _putchar((product % 10) + '0');
			 _putchar((product / 10) + '0');
		}
		else
		{
			_putchar((product0) + '0');
		}
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
