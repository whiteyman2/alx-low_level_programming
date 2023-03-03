#include "main.h"

/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		int product = i * j;
		if (product < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(product + '0');
		}
		else if (product < 100)
		{	
			_putchar(' ');
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		else
		{
			_putchar((product / 100) + '0');
			_putchar(((product / 10) % 10) + '0');
			_putchar((product % 10) + '0');
		}

		if (j != n)
		{	
			_putchar(',');
			_putchar(' ');
		}
		}
	
		_putchar('\n');
	}
}
