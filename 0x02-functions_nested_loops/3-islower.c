#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: character to be checked
 *
 * Return: 1 if character lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
