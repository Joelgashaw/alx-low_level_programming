#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 if letter, lowercase, upercase; 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
