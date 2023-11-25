#include <stdio.h>
#include <stdlib.h>

int m(int n0, int n1)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 2);
	t[0] = n0;
	t[1] = n1;
	sum = t[0] + t[1];
	printf("%i + %i = %i\n", t[0], t[1], sum);
	free(t);
}

int main(void)
{
	m(2, 4);
	return (0);
}
