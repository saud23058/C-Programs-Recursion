//#include<stdio.h>
//int fibRec(int n){
//	if(n==1||n==0){
//		return n;
//	}
//	else 
//	return fibRec(n-1)+fibRec(n-2);
//}
//int main(){
//	int n;
//	printf("Enter A Number:");
//	scanf("%d",&n);
//	int fib=fibRec(n);
//	printf("%d",fib);
//}

// Fibonocci Using loops
#include<stdio.h>
int main(){
	int a=1,b=0,c,n;
	printf ("Enter a Number :");
	scanf("%d",&n);
	for(int i=1; i<=n ; i++ ){
		printf("\t%d",c);
		a=b;
		b=c;
}