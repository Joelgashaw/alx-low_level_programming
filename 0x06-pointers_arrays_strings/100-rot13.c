#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointers to char
 * Return: char
 */

char *rot13(char *s)
{
	int i = 0;
	intt j = 0;
	char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (*(s + i) != '\0')
	{
		while (*(1 + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
