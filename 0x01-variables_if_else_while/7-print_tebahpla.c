#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; --h)
	{

		putchar(h);
	}

	putchar('\n');

	return (0);
}
