#include <stdio.h>

/**
  * before_main - executed before main
  * Return: nothing
  */
void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon back!\n");
}
