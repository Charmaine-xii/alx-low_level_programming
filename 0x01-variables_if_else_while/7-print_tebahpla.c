#include <stdio.h>
/**
*
* main - prints lowercase alphabet in reverse
*
* Return: 0 (Successful)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
