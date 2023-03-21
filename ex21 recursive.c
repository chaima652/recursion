#include<stdio.h>
int prime(int n,int a){
	if(n==2||n==1){
		return 1;
	}
	else{
			if(n%a==0) return 0;
			else return 1+prime(n,a-1); }
}int main(){
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if(prime(number,number/2)>=1) printf("prime");
	else printf("not prime");
	}
