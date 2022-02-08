#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes character c to stdout.
 *@c: is the character to print.
 *
 *Return: success means 1
 *if error, -1 returned.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
