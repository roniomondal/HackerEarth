#include <stdio.h>
#define si(n) scanf("%d",&n)

int fact(int n){
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
	
}

int main(){
	printf("Enter a number: ");
	scanf();
	int n = fact();
}
