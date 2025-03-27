#include<stdio.h>
int main(){
	int a=7,b=7,c=10,x=8,y=8,z=12,result;
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d==%d=%d\n",a,c,a==c);
	printf("%d>d=%d\n",a,b,a>b);
	printf("%d>d=%d\n",a,c,a>c);
	printf("%dd<=%d\n",a,b,a<b);
	printf("%d<d=%d\n",a,c,a<c);
	printf("%d!=d=%d\n",a,b,a!=b);
		printf("%d!=d\n=%d",a,c,a!=c);
		printf("(x==y)&&(z<y)equals to %d\n",result);
		result=(x==y)||(z<y);
			printf("(x==y)||(z<y)equals to %d\n",result);
		result=(x!=y)||(z<y);
			printf("(x!=y)||(z<y)equals to %d\n",result);
		result=!(x!=y);
		return 0;
	
	
	
}
