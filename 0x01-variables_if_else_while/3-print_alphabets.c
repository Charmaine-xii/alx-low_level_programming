#include <stdio.h>
/**
* main - prints lower and uppercase alphabets
*
* Return: 0 (Succesful)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
