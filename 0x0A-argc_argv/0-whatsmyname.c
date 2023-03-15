#include <stdio.h>

/**
* main - prints name of program followed by new line
* @argc: holds number of argument
* @argv:holds all arguments
*
* Return: 0 (Successful)
*/
int main(int argc, char *argv[]);
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
