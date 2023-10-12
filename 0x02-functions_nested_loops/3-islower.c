#include "main.h"

/**
 *_islower - checks for lowercase characters
 *
 *Description: checks for lowercase
 *
 *Return: 1 - lowercase 0 - otherwise
 *
 *@c:input
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
