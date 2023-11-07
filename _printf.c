#include "main.h"
/**
 * This is: _printf - print to stdout formatted text
 *
 * @format: format specifier
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
  unsigned int i, count = 0;

  va_list args;

  va_start(args, format);

  for (i = 0; format[i] != '\0'; i++)
    {
      if (format[i] != '%')
	{
	  sammigmar_putchar(format[i]);
	}
      if (format[i] == '%' && format[i + 1] == 'c')
	{
	  sammigmar_putchar(va_arg(args, int));
	  i++;
	}
      count += 1;
    }
  return (count);
}
