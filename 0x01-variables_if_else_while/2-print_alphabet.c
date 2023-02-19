#include <stdio.h>
/**
* main - print alphabets in lowercase
*
* Return: 0 (Successful)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
{
	/* print the value of the variable*/

	putchar(alphabet);

	alphabet++;
}
	putchar("\n");

	return (0);
}
