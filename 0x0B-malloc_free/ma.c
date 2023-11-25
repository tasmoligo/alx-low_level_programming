#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	char *s;
	int i;

	i = 0;
	while(1)
	{
		if (s == NULL)
		{
			printf("Can't allocate %i bytes after %i calls\n", INT_MIN, i);
			return (1);
		}
		s[0] = 'H';
		i++;
	}
	return (0);
}
