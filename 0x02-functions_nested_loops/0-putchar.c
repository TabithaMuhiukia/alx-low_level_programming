#include "main.h"

/**
 * main - Prints __putchar, followed by  new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bkm[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(bkm[c]);
	}
	_putchar('\n');
	return (0);
}
