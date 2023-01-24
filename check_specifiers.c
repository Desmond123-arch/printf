#include "main.h"

/**
  * check_specifier- Checks for character that is a valid specifier and
  * assigns appropriate function to it
  * @format: the specified char *
  * Return: a pointer to a function
  */

int (*check_specifier(const char *format))(va_list)
{
	int i;
	func_t my_array[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_d},
		{"d", print_d},
    {NULL, NULL};
	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}
	return (NULL);
}

    
