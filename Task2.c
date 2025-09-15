#include <stdio.h>

int main(){
	int number;
	
	printf("Enter the number: \n");
	scanf("%d" , &number);
	
	 (number%2==0) ? printf("The number is even") : ((number%3==0) ? printf("divisible by 3") : printf("The number is odd"));
	 
	 return 0;
}
