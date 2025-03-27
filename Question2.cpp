#include<stdio.h>
int main(){
double	const pi=3.14;
	float r;//declaring the radius of circle as float
	float area;//declaring area of circle as float
	float c;//declaring  Circumference of the circle
	printf("Enter the Radius of the circle:");//telling user to enter the radius
	scanf("%f",&r);
	area=pi*r*r;//calculating the area of the circle
	printf("the area of circle is:%f",area);
	printf("\n");
    c=2*pi*r;//calculating the circumference of the circle
    printf("the circumference of the circle is:%f",c);
    printf("\n");
    printf("This is the end of operation!");//displaying the message
	return 0;
}
