#include <stdio.h>

/**
 * main - program that prints all possible combination of songle digit
 * Numbers must be separeted by ,followed by a space
 * Numbes should be printed in ascending order
 * You can only use the putchar function
 * Retur: 0
 */
int main(void)
{
int n = 48;
int com = 44;
while (n <= 57)
{
putchar(n);
if (n != 57)
{
putchar(com);
putchar(32);
}
n += 1;
}
putchar('\n');
return (0);
}
