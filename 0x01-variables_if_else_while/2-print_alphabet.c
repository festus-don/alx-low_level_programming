#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = '0'; alphabet < '26'; ++alphabet)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
