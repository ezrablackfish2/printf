#include "main.h"

/**
 * type_print - prints only the formatted version of files
 * format: every kind of text
 * Return: the number of characters printed 
 */
int type_print(const char *formats, int *index, va_list vi, char buffer[])
{
	int i, unknown_len = 0, printed_chars = -1;
	format_type f_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u' print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};
	for (i = 0; format_type[i].formats != '\0'; i++)
	{
		if (formats[*index] == formats_types[i].formats)
		{
			return (format_type[i].fn(vi, buffer, flags, width, precision, size));
		}

		if (formats[*index] == '\0')
		{
			return (-1);
		}
		unknow_len += wite(1, "%%", 1);
		if (formats[*index - 1] == ' ')
		{
			unknow_len += write(1, " ", 1);
		}
		else if (width)
		{
			--(*index);
			while(formats[*index] != ' ' && formats[*index] != '%')
			{
				--(*index),
			}
			if (formats[*ind] == ' ')
			{
				--(*index);
			}
			return (1);
		}
		unknow_len += write(1, &formats[*index], 1);
		return (unknow_len);

	}
	return (printed_chars);
}

