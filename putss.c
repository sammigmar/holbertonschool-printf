#include "main.h"
/**
 * Documentation of putss - print string
 *
 * @c: string
 * Return: number of bytes
 */
int putss(char *c)
{
int count = 0;

 if (c)
  {
    for (count = 0; c[count] != '\0'; count++)
      {
	sammigmar_putchar(c[count]);
      }
  }
 return (count);
}
