#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '1');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		if (i < 99 || j < 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
