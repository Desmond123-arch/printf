#include "main.h"
/**
 * _print_string : prints a string
 * @s: pointer to string
 */
void _print_string(char *s)
{
	int i;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
