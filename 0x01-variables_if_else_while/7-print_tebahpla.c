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

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
