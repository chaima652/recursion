#include<stdio.h>
#include<stdbool.h>
bool duplicate(int n,int key){
	if(n<10){
		if(n==key) return true;
		else return false;
	}else if(n%10==key){
		return true;
	}else{
		return duplicate(n/10,key);
	}
}
	bool duplicatedigits(int n){
		if(n<10){
			return false;
		}else if(duplicate(n/10,n%10)==true){
			return true;
		}else{
			return duplicatedigits(n/10);
		}
	}
int main(){
		int number;
			printf("enter a number ");
		scanf("%d",&number);
	if(duplicatedigits(number)==true) printf("This number contains duplicate numbers: true");
	else printf("This number contains duplicate numbers: false");
		return 0;
	}
