/*Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two.

#include<stdio.h>
int main(){
	int sign, n,reverse=0,remainder;
	printf("Enter integer to be reversed:");
	scanf("%d",&n);
	if(n<0){
		reverse=n*-1;
	}
	while(n!=0){
		remainder=n%10;
		reverse=reverse*10+remainder;
		n/=10;
	}
	printf("reversed value:%d",reverse);
	return 0;
}
