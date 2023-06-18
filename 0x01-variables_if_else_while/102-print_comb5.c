#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int c;
	int b;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	while (a < 10)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(' ');
		putchar(c + '0');
		putchar(d + '0');
		if (!(a == 9 && b == 8))
		{
			putchar(',');
			putchar(' ');
		}
		if (d < 10)
		{
			d++;
		}
		if (d == 10)
		{
			c++;
			d = 0;
		}
		if (c == 10)
		{
			b++;
			d = b + 1;
			c = a;
		}
		if (b == 9)
		{
			a++;
			b = 0;
			c = a;
			d = b + 1;
		}
	}
	putchar('\n');
	return (0);
}
