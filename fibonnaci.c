/*Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100*/


#include <stdio.h>
void Fibonacci_Series(int n){
	int FirstNum=0;
	int SecondNum=1;
	int NextNum;
	
	printf("%d, %d,",FirstNum,SecondNum);
	while((NextNum=FirstNum+SecondNum)<=n){
	printf(" ,%d",NextNum); 
	FirstNum=SecondNum;
	SecondNum=NextNum;
	NextNum=FirstNum+SecondNum;
}
}
int main(){
	Fibonacci_Series(100);
	return 0;
}
