//condition operator write a c program that compare 2 variables a and b if a is greater a will be incremented with 2 otherwise b will be subtracted with 1
#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of a :\n");
	scanf("%d",&a);
		printf("enter the value of b :\n");
	scanf("%d",&b);
	if(a>b){
		printf("the value of a will be %d",a+2);
	}
	else{
		printf("the value of the b will be %d",b-1);
	}
	return 0;
	
} 
