#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: size of a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j, temp;

	/* looping so that we get the total size of the array */
	while (i < n)
	{
		/* Equating j to n - 1 because we start at 0 for arrays, and n is 1 greater */
		/* J reads from the end of the array and swaps the last array with */
		/* the one before it */
		/* It keeps swapping that last one until it becomes the first */
		/* Then it reads again from the new last one and t this point */
		/* I is increamented so that the elements at the right places */
		/* don't get touched */
		j = n - 1;
		while (j > i)
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
		i++;
	}
}
