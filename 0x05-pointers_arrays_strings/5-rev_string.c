#include "main.h"

/**
<<<<<<< HEAD
* rev_string - reverse a string
*
* @s: the string to be reversed
*/
=======
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

>>>>>>> d15b9d0b86644fc4ae6ce7798a749ad0155b67fa
void rev_string(char *s)
{
	int length, j, i;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
