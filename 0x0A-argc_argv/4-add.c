#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers, followed by a new line.
 * @argc: holds number of argument
 * @argv: holds all arguments
 *
 * Return: 0 (Succesful), 1 (Unsuccessful)
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
