#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse.
* Return: Always 0
*/
int main(void)
{
	char lowerCase;

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
		putchar(lowerCase);

	putchar('\n');

	return (0);
}


