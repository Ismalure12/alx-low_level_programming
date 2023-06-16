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

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
