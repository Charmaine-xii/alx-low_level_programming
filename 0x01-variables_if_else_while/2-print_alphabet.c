#include <stdio.h>

/**
* main - print alphabets in lowercase
*
* Return: 0 (Successful)
*/
int main(void)
{
	char ch = 'a';
		putchar("Lowercase English Alphabets:\n");
	while (ch <= 'z')
		putchar("%c", ch);
		ch++;
	return (0);
