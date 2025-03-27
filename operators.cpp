#include<stdio.h>
int main(){
	float a,b,sum,difference,product,division;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	sum=a+b;
	printf("the sum of a and b is:%f",sum);
	printf("\n");
	difference=a-b;
	printf("the difference of a and b is:%f",difference);
	printf("\n");
	product=a*b;
	printf("the product of a and b is:%f",product);
	printf("\n");
	division=a/b;
	printf("the division of a and b is:%f",division);
	return 0;
}
