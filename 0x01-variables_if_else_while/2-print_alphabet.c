#include <stdio.h>
/**
* main - print alphabets in lowercase
*
* Return: 0 (Successful)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
