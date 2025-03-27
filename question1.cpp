#include<stdio.h>
int main(){
	int regNo;// declaring user regNo as integer datatype
	int hrs;// declaring hours worked per month  by the user as integer datatype
	float amount;// declaring the amount receive by user per hour as float datatype
	float salary;// declaring salary of the user per month
	printf("Enter your Reg Number:");//Telling user to enter his/her regNo
	scanf("%d",&regNo);//entering user registration number
	printf("Enter your working hour:");//telling user to enter his/her working hours per month
	scanf("%d",&hrs);//entering user worked hours per day
	printf("Enter the amount you receive per hour:");//telling user to enter the amount received  per hour
	scanf("%f",&amount);//entering the amount receive per hour by the user
	printf("my regNo is %d",regNo); //displaying user reg Number
	printf("\n");
		salary=amount*hrs; //calculating user's salary receive per month
	printf("my salary per month is %.2f",salary); //displaying user slary per month
	return 0;
}
