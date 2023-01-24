#include "main.h"

int _printf(const char *format,...)
{
	char *traverse;
	usigned int i;
	char *s;

	va_list args;
	va_start(arg, format);

	for(traverse = format; *traverse != '\0'; traverse++)
	{
		while(*traverse != '%')
		{
			_putchar(*traverse);
			traverse++;
		}
		traverse++;
		switch (*traverse)
		{
			case 'c': 
				i = va(arg, int);
				_putchar(i);
				break;

			case '%': i = va_arg(arg, int);
				 _putchar('%');
				  break;

			case 's': s = va_arg(arg,char *)
				  _print_string(s);
				  break;
		}
	}
	va_end(arg);
	return (traverse);
}
