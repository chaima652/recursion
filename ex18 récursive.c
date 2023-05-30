#include<stdio.h>
int reverse(int n){
	if(n==0){
		return 0;
	}else{
		return (n%10)-10*reverse(n/10);
	}
}int main(){
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	printf("reverse(n)=%d",reverse(n));
	return 0;
}
