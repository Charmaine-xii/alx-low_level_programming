#include <stdio.h>

/**
* main - print alphabets in lowercase
*
* Return: 0 (Successful)
*/
int main(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	putchar("\n");

	return (0);
}
