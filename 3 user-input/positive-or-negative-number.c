//author :- Sudheer Kumar Daram
//RGUKTN
// This is a program which will take a single number as input from user and says it is negative or positive number using ternary operator
#include<stdio.h>
int main(){
	
	int number;
	// scanf() is a built in function in c which is used to take input from user mostly
	scanf("%d",&number);
	number >= 0 ? printf("The number is %d and it is positive number",number): printf("The number is %d and it is negative number",number);
	return 0;
	
}
