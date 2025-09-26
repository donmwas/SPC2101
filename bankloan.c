/*
Name:
Reg no:
Description:program for aloan qualification
*/

#include<stdio.h>

int main(){
	char name;
	int age;
	int annualincome;
	
	printf("enter your name:");
	scanf("%s",&name);

	printf("\nenter your age:");
	scanf("%d",& age);
	printf("enter your annualincome:");
	scanf("&%d"& annualincome);
	
	
	if(age>=21&&annualincome>=21000)
	{
	printf("\ncongrats you qualify for aloan");
	}
    else
	{
    printf("\nunfortunately you can't  apply for aloan ");
	}
	return 0;}

	
