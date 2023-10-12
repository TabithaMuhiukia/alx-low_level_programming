#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
* print_number - like a hello world
*
* @n: params an integer
*
* No return
*/

void print_number(int n)
{
	unsigned in n1 = 0;

	if (n < 0)
	{
		n1 = -1;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}