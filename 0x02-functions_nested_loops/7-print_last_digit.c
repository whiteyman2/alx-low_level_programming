#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nlstd: numbers last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nlstd)
{
	int lstd;

	lstd = (nlstd % 10);

	if (lstd < 0)
	{
		lstd = (-1 * lstd);
	}

	_putchar(lstd + '0');
	return (lstd);
}
