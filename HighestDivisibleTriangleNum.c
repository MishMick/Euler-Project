#include <stdio.h>
#include <math.h>
long long int genTriangleNum(int n)
{
	int sum = 0;
	 int i;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int main(int argc, char *argv[]) 
{
	 int tester;
	 int i;
	 int factorCounter=0;
	while(factorCounter<=1000)
	{
     factorCounter=0;
     i++;   // counter i for triangular number
	 tester = genTriangleNum(i); //ith triangular number
	// 1 to the square root of the number holds exactly half of the divisors
	 for(int j = 1;j<=sqrtl(tester);j++) 
	 {
	  if(tester%j==0)
	  {
		factorCounter++;
	  }	
	 }
	 // so multiply it by 2 to include the other corresponding half
	 factorCounter*=2;
	}
	printf("%d",tester);
	return 0;
} 