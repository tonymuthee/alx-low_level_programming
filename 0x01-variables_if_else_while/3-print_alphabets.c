#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	do {
		putchar(x);
		x++;
	} while (x <= 'z');

	do {
		putchar(y);
		y++;
	} while (y <= 'Z');
	putchar('\n');
	return (0);
}
