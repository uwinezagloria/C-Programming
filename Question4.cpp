#include<stdio.h>
int main(){
	float length;
	float width;
	float area;
	float perimeter;
	printf("enter the length of the rectangle:");
	scanf("%f",&length);
	printf("enter the width of the rectangle:");
	scanf("%f",&width);
	area=length*width;
	printf("the area of rectangle is :%f",area);
	printf("\n");
	perimeter=2*(length+width);
	printf("the perimeter of rectangle is :%f",perimeter);
	return 0;
}
