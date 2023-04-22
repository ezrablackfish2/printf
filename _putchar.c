#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		return (write(1, &buffer[0], *buff_ind));
	}
	*buff_ind = 0;

}
