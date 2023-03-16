#include<stdio.h>
int decimaltobinary(int n){
	if(n==0){
		return 0;
	}else{
		return (n%2)+10*decimaltobinary(n/2);
	}
}
int decbinex30(int n){
	if(n<10){
		if(n==1) return 1;
		else return 0;
	}else{
		if((n%10)==1) return 1+decbinex30(n/10);
		else return decbinex30(n/10);
	}
}
int main(){
	int number;
	printf("enter a number");
	scanf("%d",&number);
	printf("the number of bits set to 1 in its binary is:%d",decbinex30(decimaltobinary(number)));
	return 0;
}
