#include <stdio.h>
#include <math.h>
int pythTriplet(int N)
{
	int a,b,c;
	for(a = 2 ; a < N/3 ; a++)
	{
		for(b = a+1; b < N;b++)
		{
			c = (N - a - b);
			if (a*a + b*b == c*c)
			{
			 printf("%d %d %d ",a,b,c);
			 return a*b*c;
			}
		}
	}
	return 0;
}
int main(int argc, char *argv[]) {
	printf("%d",pythTriplet(1000));
}