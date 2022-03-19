#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * you can only use putchar
 * Return: 0
 */

int main(void)
{
	int l = 'a';
	while (l <= 'z')
	{
		ptchar(1);
		l += 1;
	}
	putchar('\n');
	return (0);
}
