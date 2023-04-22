#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @buffer: The array that contains the files of 
 * @buff_index: the index of the file that is at current
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char buffer[], int *buff_index)
{
	if (*buff_index > 0)
	{
		return (write(1, &buffer[0], *buff_index));
	}
	*buff_index = 0;

}
