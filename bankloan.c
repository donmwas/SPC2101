/*
Name:
Reg no:
Description:program for aloan qualification
*/

#include<stdio.h>

int main(){
	int age;
	float annualincome;
	
	printf("enter your age:");
	scanf("%d",&age);
	printf("  \n");
	printf("enter your annualincome:");
	scanf("%f",&annualincome);
	printf("  \n");
	
	
	if(age) " equal or grater than 21";	
	printf("\ncongrats you qualify for aloan");
    if(age) "is less than 21";	
    printf("\nyou donnot have the requirements to apply for aloan ");
    if(annualincome)"equal or grater than 21000";
    printf("\ncongrats you qualify for a loan");
    if(annualincome)"less than 21000";
    printf("\nyou donnot have the requirments to apply for aloan");
	return 0;}
	