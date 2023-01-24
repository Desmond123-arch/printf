#include "main.h"

int _printf(const char *format,...)
{
	size_t traverse = 0;
	unsigned int i;
	char *s;

	va_list args;
	va_start(args, format);

	for(; format[traverse] != '\0'; traverse++)
	{
		while(format[traverse] != '%')
		{
			_putchar(format[traverse]);
			traverse++;
		}
		traverse++;
		switch (format[traverse])
		{
			case 'c': 
				i = va_arg(args, int);
				_putchar(i);
				break;
			case 's': s = va_arg(args,char *);
				  _print_string(s);
				  break;
		}
	}
	va_end(args);
	return (traverse);
}
