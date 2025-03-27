// a program to find roots of a quadratic equation when coefficients are entered by user.

#include<stdio.h>
#include<cmath>
int main(){
	float a,b,c,delta,x1,x2;
	printf("enter the value of a:");
	scanf("%f",&a);//reading the value of a
	printf("enter the value of b:");
	scanf("%f",&b);//reading the value of b
	printf("enter the value of c:");
	scanf("%f",&c);//reading the value of c
	delta=(b*b)-(4*a*c);//calculating the delta 
	if(delta<0){//condition to verify if delta is less than 0
		printf("there is no solution");//display a message of no solution when delta is less than zero
	}
	else{//if delta is not less than zero we continue with calculating x1 and x2
			x1=(-b+(sqrt(delta)))/(2*a);//calculating x1
	printf("the value of x1 Is:%f",x1);//printing x1
		printf("\n");
		x2=(-b-(sqrt(delta)))/(2*a);//calculating x1
		printf("the value of x2 Is:%f",x2);//printing x2
	}
	return 0;
}
