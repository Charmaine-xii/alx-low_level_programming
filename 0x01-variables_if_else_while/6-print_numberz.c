#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting with 0
*
* Return: 0 (Successful)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');

	putchar("\n");

	return (0);
}
