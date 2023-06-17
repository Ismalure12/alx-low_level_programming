#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int a;

	c = 'a';
	a = 48;
	while (a < 57)
	{
		putchar(a);
		a = a + 1;
	}
	while (c < 'g')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
