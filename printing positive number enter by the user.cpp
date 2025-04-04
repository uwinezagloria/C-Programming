//a program to print the number entered by user only of the number entered is positive
#include<stdio.h>
int main(){
	int number;
	printf("enter the number: ");
		scanf("%d",&number);
	if(number>0){
		printf("the positive number is:%d",number);
	}
	else{
		printf("we only display positive numbers!");
	}
}
