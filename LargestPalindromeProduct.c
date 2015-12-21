#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(long n)
{
	long temp = n;
	long reverse = 0;
    long rem;
	while(temp!=0)
	{
		rem = temp%10;
		reverse = reverse*10 + rem;
		temp/=10;
	}
	if(reverse == n)
	 return true;
	else {
	 return false;
	}
}
long largestPalindromeProd()
{
	long max = 0;
	long prod;
	for(int i=999;i>100;i--)
	{
		for(int j=999;j>100;j--)
		{
			prod = i*j;
			if(isPalindrome(prod) && prod>max)
			 max = prod;
		}
	}
	return max;
}
int main(int argc, char *argv[]) 
{
	printf("%ld",largestPalindromeProd());
}