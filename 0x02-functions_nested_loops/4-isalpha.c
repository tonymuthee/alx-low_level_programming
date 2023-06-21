#include "main.h"

/**
 * _isalpha - check for a character in alphabet
 * @c: character to be checked
 *
 * Return: 1 if c is letter (lower or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
