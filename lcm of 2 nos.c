//C program code to find the lcm of two numbers using recursion//
#include<stdio.h>
int lcm(int x, int y);//Function declaration//
int main()
{
	int n1, n2, result;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("\nEnter second number: ");
	scanf("%d", &n2);
	result = lcm(n1, n2);//Function call//
	printf("LCM of %d and %d is %d", n1, n2, result);
	return 0;
}
int lcm(int n1, int n2)//Function definition//
{
	static int multiple=1;
	if(multiple%n1==0 && multiple%n2==0)//if a common multiple is found it will return that number//
	{
		return multiple;
	}
	else
	{
		multiple++;//if not it will check for next number whether it is a common multiple or not//
		return lcm(n1, n2);
	}
	
}
