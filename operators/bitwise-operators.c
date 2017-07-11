//author :- Sudheer Kumar Daram
//RGUKTN

#include<stdio.h>
int main(){
	
	int num1 = 5, num2 = 10;
	
	int bwand,bwor,bwxor,lshift,rshift;		//declaring bitwise and, bitwiseor, bitwise xor
	bwand = num1 & num2;					//bitwise and
	bwor = num1 | num2;						//bitwise or
	bwxor = num1 ^ num2;					//bitwise xor
	lshift = num1<<2;						//left shift
	rshift = num1>>2;						//right shift
	
	//printing results
	printf("num1 = %d , num2 = %d\n",num1,num2);
	printf("Result of bwand is %d\n",bwand);
	printf("Result of bwor is %d\n",bwor);
	printf("Result of bwxor is %d\n",bwxor);
	printf("Result of left shift 2 positions from %d is %d\n",num1,lshift);
	printf("Result of right shift 2 positions from %d is %d\n",num1,rshift);
	return 0;
}
