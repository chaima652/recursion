#include<stdio.h>
void reverse(int nmbr){
	if(nmbr!=0){
		printf("%d",nmbr%10);
		reverse(nmbr/10);
	}
	}int main(){
		int n;
		printf("enter a number n");
	scanf("%d",&n);
	reverse(n);
	return 0;
	}