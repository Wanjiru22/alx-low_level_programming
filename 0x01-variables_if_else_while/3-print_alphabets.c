#include <stdio.h>
/**
* main - Prints uppercase letters
* Return: Always 0
*/
int main(void)
{
	int upperCase;

	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);
	putchar('\n');

	return (0);
}
