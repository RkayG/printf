#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to print
 * Return: 1 for success -1 for failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
