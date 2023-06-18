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

	a = 0;
	c = 1;
	while (a < 9)
	{
		putchar(a + '0');
		putchar(c + '0');
		putchar(',');
		if (c < 10)
		{
			c++;
		}
		if (c == 10)
		{
			a++;
			c = a + 1;
		}
	}
	putchar('\n');
	return (0);
}
