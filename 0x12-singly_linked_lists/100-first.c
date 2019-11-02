#include <stdio.h>

void myStartupFun(void)__attribute__((constructor));

/**
*myStartupFun - adds a new node to thelist
*Return: On success 1.
*/

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
