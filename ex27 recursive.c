#include<stdio.h>
int lg(int b,int val){
	if(val==1){
		return 0;
	}else{
		return 1+lg(b,val/b);
	}
}int main(){
	int base,value;
	printf("enter a value");
	scanf("%d",&value);
		printf("enter the base");
	scanf("%d",&base);
	
	printf("the logarithm of this value is:%d",lg(base,value));
}
