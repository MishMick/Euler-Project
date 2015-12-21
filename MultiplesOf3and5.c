#include <stdio.h>
void multiples(int a,int b,int n)
{
	int i;
	static int sum;
	for(i=1;i<n;i++)
	{
		if(i%a==0 || i%b==0)
		{
			sum += i;
		}
	}
	printf("%d",sum);
}
int main(int argc, char *argv[]) 
{
	multiples(3,5,1000);
}