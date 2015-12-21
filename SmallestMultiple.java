import java.util.*;
import java.rmi.dgc.*;

public class SmallestMultiple 
{
	public static long gcd(long a,long b)
	{
		if(a<b) return gcd(b,a);
		if(a%b == 0) return b;
		else return gcd(b,a%b);
	}
	public static long LCM(long x,long y)
	{
		return ((x*y)/gcd(x,y));
	}
    private static long lcm(long[] input)
	{
		long result = input[0];
		for(int i = 1; i < input.length; i++) 
		 result = LCM(result, input[i]);
		return result;
	}
	public static void main(String[] args) 
	{
		long arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
		System.out.println(lcm(arr));
	}
}