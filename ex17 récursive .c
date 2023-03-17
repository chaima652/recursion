#include<stdio.h>
int sumodd(int n){
	if(n==1){
		return 1;
	}else{
		return 2*n-1+sumodd(n-1);
	} 
	}int main(){
	int n;
	printf("enter a nember n");
	scanf("%d",&n);
	printf("%d",sumodd(n));
	return 0;
}