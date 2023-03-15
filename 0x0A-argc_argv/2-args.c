#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: holds number of arguments
* @argv: holds all arguments
*
* Return: 0 (Succesful)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
