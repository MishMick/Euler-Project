#include <stdio.h>
#include <math.h>
int isPrime(long long int number)
{
	int i;
	for (i=2; i*i<=number; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}
long long int sumOfPrimes(long long int N)
{
	long long sum = 2;
	for(int i = 3; i<N ;i+=2)
	{
		if(isPrime(i))
		{
			sum+=i;
		}
	}
	return sum;
}
int main(int argc, char *argv[]) {
	printf("%lld",sumOfPrimes(2000000));
}