#include <stdio.h>
/**
* main - prints lower and uppercase alphabets
*
* Return: 0 (Succesful)
*/
int main(void)
{
	int letter = 'a';
	int LETTER = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER++;
	}

	putchar('\n');

	return (0);
}
