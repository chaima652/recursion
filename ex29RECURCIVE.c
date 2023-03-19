#include<stdio.h>
int DIV(int a,int b){
	if(a-b<b){
		return 1;
	}else{
		return 1+DIV(a-b,b);
	}
}
int MOD(int a,int b){
	if(a-b<b){
		return a-b;
	}else{
		return MOD(a-b,b);
	}
}
int main(){
	int x,y;
	printf("enter la valeur de x");
	scanf("%d",&x);
		printf("enter la valeur de y");
	scanf("%d",&y);
	printf("the quotient is %d \n the remainder is %d",DIV(x,y),MOD(x,y));
}
