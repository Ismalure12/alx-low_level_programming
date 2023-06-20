#include <stdio.h>
#include <unistd.h>
/**
 *_putchar - fuction that writes the input character
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
