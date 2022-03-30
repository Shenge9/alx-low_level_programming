#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: String pointer
 *
 * Return: 0 (always)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
