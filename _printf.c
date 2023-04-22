#include "main.h"

void _putchar(cahr buffer[], int *buff_ind);

/**
 * _printf - prints every thing given to it
 * format: every kind of text
 * Return: the number of characters printed 
 */

int _printf(const char *format, ...)
{
	va_list vi;
	int i = 0, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;

	char buffer[BUFF_SIZE];

	if (format == NULL)
	{
		return (-1);
	}

	va_start(vi, format);
	if (format)
	{
		while (format[i] && format[i] != '\0')
		{
			if ((format[i] != '%'))
			{
				buffer[buff_ind] = format[i];
				if (buff_ind == BEFF_SIZE)
				{
					_putchar(format[i]);
				}
				printed_chars++;
			}
			else
			{
				flags = get_flags(format, &i);
				width = get_width(format, &i, list);
				precision = get_precision(format, &i, list);
				size = get_size(format, &i);
				_putchar(buffer, &buff_ind);
				++i;
				printed = type_print(format, &i, vi);
				if (printed == -1)
				{
					return (-1);
				}
				printed_chars += printed;
			}
		}
	}
	_putchar(buffer, &buff_ind);
	va_end(vi);
	return (printed_chars);
}
