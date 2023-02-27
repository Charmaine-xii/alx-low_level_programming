#include "main.h"

/**
* rev_string - writes a string in reverse
* @s: string that will be written in reverse
*/
void rev_string(char *s)
{
	int slth = 0;
	int i = 0;
	char temp;

	while (s[i++])
		slth++;

	for (i = slth - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[slth - i - 1];
		s[slth - i - 1] = tmp;
	}
}
