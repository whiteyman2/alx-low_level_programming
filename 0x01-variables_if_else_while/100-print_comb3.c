#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = i + 1; j < 10; j++)
		{
			int num = i * 10 + j;
	
			if (num == 10 || num == 0)
			{
				continue;
			}
			putchar(i + '0');
			putchar(j + '0');
		if (num != 90)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	return (0);
}
