#include <stdio.h>

/**
* main - lists all natural numbers below 1024 (excluded)
*
* Return: 0 (Successful)
*
*/
int main(void)
{
	int i, sum = 0;

	for (i = 0; 1 < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
