/*
program that print status of a person depending on the age entered.
 if the age is <12:"a child" if the age is <21:"teenage" if age is <60 :"adult"
  otherwie the status is "Mature */
  #include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
		scanf("%d",&age);
		if(age<12){
			printf(" your status depending on your age is :'A child'");
		}
		else if(age<21){
			printf("your status depending on your age  is:'teenage'");
		}
		else if(age<60){
			printf("your status depending on your age is:'Adult'");
		}
		else{
			printf("your status is:'Mature'");
		}
	
}
