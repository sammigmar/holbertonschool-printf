#include "main.h"
/**
 * This is: _printf - print to stdout formatted text
 *
 * @format: format specifier
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
  unsigned int i, s_count, count = 0;

  va_list args;

  va_start(args, format);

  for (i = 0; format[i] != '\0'; i++)
    {
      if (format[i] != '%')
	{
	  sammigmar_putchar(format[i]);
	}
      else  if (format[i + 1] == 'c')
	{
	  sammigmar_putchar(va_arg(args, int));
	  i++;
	}
      else if (format[i + 1] == 's')
	{
	  s_count = putss(va_args(args, *char));
	  i++;
	  count += s_count - 1);
    }
  else if (format[i + 1] == '%')
    {
      sammigmar_putchar('%');
    }
      count += 1;
    }
  va_end(args);
  return (count);
}
