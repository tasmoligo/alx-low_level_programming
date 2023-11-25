#include "main.h"
#include <stdio.h>

int main(void)
{
	int a;

	a = _abs(-34);
	printf("%i\n", a);
	printf("%i\n", _isupper('F'));
	printf("%i\n", _isdigit('9'));

	return (0);
}
