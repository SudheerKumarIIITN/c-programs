//author :- Sudheer Kumar Daram
//RGUKTN

#include<stdio.h>
int main(){
	int num = 10;
	printf("%d\n",num++);	//post increment operator which will increment the value after assignment. So output is 10 and num becomes 11
	printf("%d\n",++num);	//pre increment operator which will increment the value immediately before assignment. Here output is 12 and num is also 12
	printf("%d\n",num--);	//post decrement operator which will decrease the value after assignment. Here output is 12 but number becomes 11
	printf("%d\n",--num);	//pre decrement operator which will decrease the value immediately before assignement. Here output is 10
	return 0;
	
}
