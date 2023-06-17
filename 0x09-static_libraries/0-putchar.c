#include <unistd.h>

/**
* _putchar - char  c to stdout
 * c character to print
 *
 * Return:success 1.
 * Return :-1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

