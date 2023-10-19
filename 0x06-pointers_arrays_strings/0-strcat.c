#include "main.h"

/**
<<<<<<< HEAD
*_strcat - concatenates two strings
*
*@dest: destination string
*
*@src: source string
*
*Return: pointer to dest
=======
*_strcat - function that concatenates two strings
*@src: source of the strings
*@dest: destination of the concatenated strings
*
*Return: Pointer to dest
>>>>>>> d15b9d0b86644fc4ae6ce7798a749ad0155b67fa
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
