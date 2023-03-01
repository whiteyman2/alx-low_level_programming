#include "main.h"

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "-putchar"

	while (*sh)
	{
		-putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
