#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of two diagonals of square matrix of integers
* @a: array
* @size: matrix
*/
void print_diagsums(int *a, int size);
{
	int i, n, sum1, sum2;

	sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
			if (i == n)
			{
				sum += a[i * size + n];
			}
			if (i + n == size - 1)
			{
				sum2 += a[i * size + n];
			}
		}

	}

	printf("%d, %d\n", sum1, sum2);

}
