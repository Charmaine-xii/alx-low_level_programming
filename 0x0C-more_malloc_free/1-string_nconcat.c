#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: maximum number of bytes of @s2 to concatenated to @s1
*
* Return: pointer to concatenated space in memory,
*	Otherwise if function fails return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *constr;

	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = (int)len1(s1);
	len2 = (int)len2(s2);
	if (n > len2)
		n = len2;

	constr = malloc(sizeof(char) * (len1 + n + 1));

	if (constr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		constr[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		constr[j] = s2[i];
		j++;
	}
	constr[j] = '\0';

	return (constr);
}
