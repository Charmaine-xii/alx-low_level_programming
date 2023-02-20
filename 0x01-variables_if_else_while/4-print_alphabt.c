#include <stdio.h>
/**
* main - prints lowercase alphabets except q and e
*
* Return: 0 (Successful)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
