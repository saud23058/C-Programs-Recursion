#include<stdio.h>
int sumofNumberRec(int n){
	if (n==1){
		return 1;
	}
	int sum=sumofNumberRec(n-1)+n;
	return sum;
}
int main(){
	int n;
	printf("Enter a Number :");
	scanf("%d",&n);
	int sum=sumofNumberRec(n);
	printf("%d  is a Sum  of %d",sum,n);
}