#include<stdio.h>
int main()
{
	int a ;
	printf("Enter a number :");
	scanf("%d", &a);
	if( a<=0){
		printf("invalid input!!!");
	}
	else{
	
		if(a % 2 == 0){
			printf("the given number is even");
		}
		else{
			printf("the given number is odd");
		}
	}
	return 0;
}
