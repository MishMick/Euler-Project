#include <stdio.h>
#include <math.h>
int isPrime(long long int n)
{
	int i;
	long long int sqrt = sqrtl(n);
	if(n==2)
	 {
	  return 1;
     }
	if(n%2==0)
	{
	 return 0;
	}
	for(i=3;i<sqrt;i+=2)
	{
		if(n%i==0)
		{
		 return 0;
		}
	}
 	return 1;
}
int getLargestPrimeFactor(long long int n)
{
	long answer;
	long factor = 2;
	while(n!=1)
	{
		if(n % factor == 0)
		{
			if(isPrime(factor))
			{
				answer = factor;
			}
			n = n / factor;
		}
		else {
			factor++;
		}
	}
	return answer;
}
int main(int argc, char *argv[]) {
	printf("%d",getLargestPrimeFactor(600851475143));
}