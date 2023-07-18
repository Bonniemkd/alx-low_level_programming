#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the stdout
 * @c: the charactoer to print
 *
 * Return: on success 1.
 * on erroe, -1 is returned, amd errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
