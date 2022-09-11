#include <stdio.h>
/**
* main - Prints lowercase letters except q and e
* Return: Always 0
*/
int main(void)
{
	char lowerCase;
	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)

	{
		if (lowerCase != 'e' && lowerCase != 'q')
			putchar(lowerCase);
	}

	putchar('\n');

	return (0);
}
