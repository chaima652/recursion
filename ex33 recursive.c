#include<stdio.h>
#include<stdbool.h>
bool even(int n){
	if(n==0){
		return true;
	}else if(n==1){
		 return false;
	}else{
		return even(n-2);
	}
}
bool odd(int n){
	if(n==0){
		return false;
	}else if(n==1){
	return true;
	}else{
		return odd(n-2);
	}
}


int main(){
	int number;
	printf("enter a number");
	scanf("%d",&number);
	printf("the number is even:%d\n",even(number));
	printf("the number is odd:%d",odd(number));
	return 0;
}
