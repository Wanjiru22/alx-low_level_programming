#include "main.h"

/**
* _strcmp - compares two strings
* @s1: The first string
* @s2: The second string
* Return: The result of the comparision of the two strings
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
