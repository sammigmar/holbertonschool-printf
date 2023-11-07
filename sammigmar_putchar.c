#include "main.h"
/**
 * sammigmar_putchar - print a character
 * @c: char input
 * Return: 1
 */
int sammigmar_putchar(char c)
{
return (write(1, &c, 1));
}
