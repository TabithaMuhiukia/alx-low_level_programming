#include <stdio.h>

/**
<<<<<<< HEAD
* main - calculate largest prime of 612852475143
*
* Return : Success Always
*/

int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);
	return (0);
=======
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
        long int x = 612852475143;
        long int py;

        for (py = 2; py < x; py++)
        {
                if (x % py == 0)
                {
                        x = x / py;
                }
        }
        printf("%ld\n", py);
        return (0);
>>>>>>> 4f3647ec2822a1a6cfdd9fb3b97e26825c3919bf
}
