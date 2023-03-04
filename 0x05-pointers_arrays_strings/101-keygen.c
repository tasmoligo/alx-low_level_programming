#include "main.h"
/**
  * main - Entry point
  * Return: nothing
  */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
