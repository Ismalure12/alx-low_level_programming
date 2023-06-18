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

	a = 0;
	b = 1;
	c = 2;
	while (a < 8)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
		if (a != 7)
		{
			putchar(',');
			putchar(' ');
		}
		if (c < 10)
		{
			c++;
		}
		if (c == 10)
		{
			b++;
			c = b + 1;
		}
		if (b == 9)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
	putchar('\n');
	return (0);
}
