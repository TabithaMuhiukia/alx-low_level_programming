#include "main.h"

/**
* _strlen - returns the length of a string
*
*@s: the string to be counted
*Return: length of a string
*/

int _strlen(char *s)
{
	int n;
	int len = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		len++;
	}
	return (len);
}
