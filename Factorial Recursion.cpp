#include<stdio.h>
int factorial_recursion(int n){
	if(n<1){
	
		return 1;
}
	else 
	return n*factorial_recursion(n-1);
}
int main ()
{
	int x;
	printf("Enter a Number To Find Its Factorial:");
	scanf("%d",&x);
	int fact=factorial_recursion(x);
	printf("Factorial of  %d  is %d ",x,fact);
	
}