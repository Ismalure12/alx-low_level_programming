#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int r;

	while (n <= 15 && n >= 0 && i < n)
	{
		while (j < 10)
		{
			r = j * i;
			if (j == 0)
			{
				_putchar(r + '0');
			}
			else if (r < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r >= 10 && r < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if (r >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 100) + '0');
				_putchar(((r / 10) % 10) + '0');
				_putchar((r % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
