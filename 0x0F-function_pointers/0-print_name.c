#include "function_pointers.h"

/**
 * print_name - accepts the name and address of a function that will print the name
 * @name: the string
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
