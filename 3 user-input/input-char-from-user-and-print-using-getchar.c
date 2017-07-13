//author :- Sudheer Kumar Daram
//RGUKTN
// This is a program which will take a single input from user as a character and print it to screen using scanf built in function
#include<stdio.h>
int main(){
	
	char input_character;
	// scanf() is a built in function in c which is used to take input from user mostly
	input_character = getchar();
	putchar(input_character);
	return 0;
	
}
