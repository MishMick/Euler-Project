#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int isPrime(long long int number)
{
	int i;
	for (i=2; i*i<=number; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}
int returnNPrime(int N)
{
	int counter = 0;
	int i ;
	if(N == 1) return 2;
	for(i=3;i<200000;i+=2)
	{
		if(isPrime(i))
		{
			counter++;
			if(counter == (N-1))
			 return i;
		}
	}
	return 0;
}
int main(int argc, char *argv[]) 
{
	//printf(isPrime(1)?"true":"false");
	printf("%d",returnNPrime(10001));
	return 0;
}