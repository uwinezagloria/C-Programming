#include<stdio.h>
int main(){
	//asking user to enter two float number and after we calculate the sum and round off to 2 decimal places
	float num1;//declaring the first number as float
	float num2;//declaring the second number as float
	float sum;//declaring sum as float
	printf("Enter the first number:");
	scanf("%f",&num1);//reading the value of first number 
	printf("Enter the second number:");
	scanf("%f",&num2);//reading the value of the second number
	sum=num1+num2;//calculating the sum of those 2 numbers
	printf("the sum of two float number:%.2f ",sum);//displaying the sum we calculated
	return 0;
}
