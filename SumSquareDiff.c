#include <stdio.h>
long long int sumOfSquares(int N)
{
	long long int i;
	long long static int sumA ;
	for(i=1;i<=N;i++)
	{
		sumA += i*i;
	}
	return sumA;
}
long long int squareOfSum(int N)
{
	int j;
	long long static int sumB ;
	for(j=1;j<=N;j++)
	{
		sumB += j;
	}
	return sumB*sumB;
}
long long int result(int N)
{
	return (squareOfSum(N)-sumOfSquares(N));
}
int main(int argc, char *argv[]) 
{
	printf("%lld",result(100));
	return 0;
}