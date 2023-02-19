#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
*
* Return: 0 (Successful)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
