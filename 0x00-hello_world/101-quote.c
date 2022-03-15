#include <stdio.h>
/*
 * main - entry point
 * print with out using printf and puts
 * Return: Always 0 (success)
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*s) putchar (*s++);

	return (0);
}
