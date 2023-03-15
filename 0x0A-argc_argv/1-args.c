#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: holds number of argument
* @argv: holds all arguments
*
* Return: 0 (Succesful)
*/
int main(int argc, char *argv[])
{
	(void)argv; /* argv will be ignored, focus is on argc*/

	{
		if (argc)
			printf("%d\n", argc - 1);
	}

	return (0);
}
