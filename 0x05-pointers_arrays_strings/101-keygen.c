#include "main.h"
/**
  * main - Entry point
  * Return: nothing
  */
int main(void)
{
	int number;

	srand(time(0));

	number = rand();
	printf("%d\n", number);
	return (0);
}
