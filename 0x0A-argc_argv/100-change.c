#include <stdio.h>
#include <stdlib.h>

int _25(int cents);
int _10(int cents);
int _5(int cents);
int _2(int cents);
int _1(int cents);
int main(int argc, char **argv)
{
	int cents, coins;
	int quart, ten, five, two, one;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	cents = atoi(argv[1]);

	quart = _25(cents);
	cents = cents - quart * 25;

	ten = _10(cents);
	cents = cents - ten * 10;

	five = _5(cents);
	cents = cents - five * 5;

	two = _2(cents);
	cents = cents - two * 2;

	one = _1(cents);
	cents = cents - one * 1;

	coins = quart + ten + five + two + one;

	printf("%i\n", coins);
	
	return (0);
}

int _25(int cents)
{
	int coins;

	while (cents - 25 >= 0)
	{
		cents -= 25;
		coins++;
	}
	return (coins);
}
int _10(int cents)
{
	int coins;

	while (cents - 10 >= 0)
	{
		cents -= 10;
		coins++;
	}
	return (coins);
}
int _5(int cents)
{
	int coins;

	while (cents - 5 >= 0)
	{
		cents -= 5;
		coins++;
	}
	return (coins);
}
int _2(int cents)
{
	int coins;

	while (cents - 2 >= 0)
	{
		cents -= 2;
		coins++;
	}
	return (coins);
}
int _1(int cents)
{
	int coins;

	while (cents - 1 >= 0)
	{
		cents--;
		coins++;
	}
	return (coins);
}
