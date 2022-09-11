#include <stdio.h>
/**
* main - Prints alphabets in lowercase letters
* Return: Always 0
*/
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	putchar('\n');

	return (0);
}
