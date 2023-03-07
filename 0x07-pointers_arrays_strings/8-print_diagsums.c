#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of two diagonals of square matrix of integers
* @a: array
* @size: matrix
*/
void print_diagsums(int *a, int size);
{
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++;
	}

	printf("%d, %d\n", sum1, sum2);

}
