#include<stdio.h>
int sumnmbr(int n,int m){
	if(m==0){
		return n;
	}else{
		return 1+sumnmbr(n,m-1);
	}}
int main(){
int x,y;
printf("enter a number x");
scanf("%d",&x);
printf("enter a number y");
scanf("%d",&y);			
printf("the sum of x and y is:%d",sumnmbr(x,y));
		}
