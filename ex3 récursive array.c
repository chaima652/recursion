#include<stdio.h>

int maximum(int T [],int N){	
	if(T[N]==1){
		return T[N];
	}else{
		if(T[N-1]>maximum(T,N-2)) return T[N-1];
		else return maximum(T,N-2);
		}
}int main(){	
	int t[]={1,4,8,3,2};

	maximum(t,5);
	printf("%d",maximum(t,5));
	return 0;
}
