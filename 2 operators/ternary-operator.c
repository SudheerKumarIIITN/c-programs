//author :- Sudheer Kumar Daram
//RGUKTN
//This is a program to print big number by comparing two numbers using ternory operator.

#include<stdio.h>
int main(){
	
	int num1 = 10, num2=12;
	
	(num1>num2) ? printf("%d is big number",num1): printf("%d is big number",num2);	// ?:; is ternory operator smilar to if else statement
	
	return 0;
	
}
