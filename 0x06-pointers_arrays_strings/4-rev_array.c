#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array
* @n: Length of array
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
