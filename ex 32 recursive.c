#include<stdio.h>
int pnmbr(int n,int m){
	if(m==0){
		return 0;
	}else{
		return n+pnmbr(n,m-1);
	}}
int main(){
int x,y;
printf("enter a number x");
scanf("%d",&x);
printf("enter a number y");
scanf("%d",&y);			
printf("the prudct of x and y is:%d",pnmbr(x,y));
		}
