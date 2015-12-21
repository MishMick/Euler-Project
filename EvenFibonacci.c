#include <stdio.h>
void fibonacci()
{
	int a = 0;
	int b = 1;
	int c;
	static int sum ;
	while(c<4000000)
	{
	 c = a + b;
	 a = b;
	 b = c;
	  if(c%2==0)
	   {
		sum += c;
	   }
	}
	printf("%d",sum);
}
int main(int argc, char *argv[]) {
	fibonacci();
}