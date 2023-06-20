#include "stdio.h"
#include <ctype.h>
/**
 *_islower - function that checks the lower case letter
 *@c: is the char to be checked
 *Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
