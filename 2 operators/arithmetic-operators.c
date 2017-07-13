//author :- Sudheer Kumar Daram
//RGUKTN

#include<stdio.h>
int main(){
	
	int a=10,b=5;
	
	int sum,diff,product,divi,reminder;
	
	sum = a+b;		//addition
	diff = a-b;		//subtraction
	product = a*b;	//multiplication
	divi = a/b;		//divivsion
	reminder = a%b; //reminder
	
	printf("number 1 = %d and number 2 = %d.\nAnd their arithmetic operations results.\n",a,b);
	printf("Additions of %d and %d is %d\n",a,b,sum);
	printf("subtraction of %d and %d is %d\n",a,b,diff);
	printf("multiplicaton of %d and %d is %d\n",a,b,product);
	printf("division of %d and %d is %d\n",a,b,divi);
	printf("The reminder when %d divides %d is %d\n",b,a,reminder);
	return 0;
}
