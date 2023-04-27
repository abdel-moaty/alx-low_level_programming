#include <stdio.h>
#include "lists.h"

/**
 * race - prints You're beat! and yet, you must allow,\nI bore my house upon my
 * back!\n before the main function is executed
 */
void __attribute__((constructor)) race(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
