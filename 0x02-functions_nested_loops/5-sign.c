#include <limits.h>
#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 prints '+' if n > o, 0 prints '0' if n = 0, -1 prints '-' if n < o
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{	_putchar('-')
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
