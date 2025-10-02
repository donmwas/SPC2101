//Simple program to show eligible students
/*
Name:
Reg no:
Description:program to show eligible students
*/

#include<stdio.h>

int main(){
	char name;
	int attendance;
	int marks;
	printf("enter your name:");
	scanf("%s",&name);
	printf("enter you attendance: ");
	scanf("%d",&attendance);
	printf("enter your marks:");
	scanf("%d",&marks);
	
	if(attendance >=75&&marks >=40)
	{
	printf("you are eligible");
	}
	
	else
	{
	printf("you are not eligible");
	}
	
	return 0;}	
	