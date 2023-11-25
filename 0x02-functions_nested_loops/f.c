#include <stdio.h>

int main()
{
	unsigned int n1=1, n2=2, sum=n1+n2;
	int i=0;
	
	printf("%d, %d, ", n1, n2);
	while (i<48)
	{
		if (i!=47)
		{
			printf("%d, ", sum);
  		n1=n2;
	  	n2=sum;
		  sum=n1+n2;
		}
		else
		{
			printf("%d\n", sum);
		}
		i++;
	}
	return (0);
}
