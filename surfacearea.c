/*
Name:
Reg no:
Description:program to compute surfacearea of a cylinder
*/

#include<stdio.h> 

int main(){
	float pie, radius,height,surfacearea;
	printf("enter pie");
	scanf("%f",&pie);
	
	printf("enter radius of the cylinder:");
	scanf("%f",&radius);
	
	printf("enter height of the cylinder:");
	scanf("%f",&height);
	
	surfacearea=2*pie*radius*radius+2*pie*radius*height;
	
	printf("surfacearea is: %2f",surfacearea);
	return 0;}