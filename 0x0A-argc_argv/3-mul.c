#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments supplied to it
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
