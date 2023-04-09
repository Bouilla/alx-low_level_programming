#include <stdio.h>
#include <main.h>
/**
  *main - Entery point
  *
  *_puts_recursion a function that prints a string in reverse.
  *@sthe string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);

	}
}
