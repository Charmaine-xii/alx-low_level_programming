#include <stdio.h>
/**
* main - print alphabets in lowercase
*
* Return: 0 (Successful)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter)
		letter++;
	}

	putchar('\n');

	return (0);
}
