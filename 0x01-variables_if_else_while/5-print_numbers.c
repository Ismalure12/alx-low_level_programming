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

	while (c < 10)
	{
		printf("%d", c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
