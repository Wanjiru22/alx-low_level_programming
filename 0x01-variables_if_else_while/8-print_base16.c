#include <stdio.h>
/**
* main - Prints all the numbers of base 16 in lowercase.
* Return: Always 0.
*/
int main(void)
{
	int num;
	char lowerCase;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase++)
		putchar(lowerCase);

	putchar('\n');

	return (0);
}
