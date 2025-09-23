/*
Name:
Reg no:
Description:program to compute volume of a cylinder
*/

#include <stdio.h>

int main(){
	float pie,radius_squared,height,volume;
	printf("enter pie:");
	scanf("%f",&pie);
	
	printf("enter radius_squared:");
	scanf("%f",&radius_squared); 
	
	printf("enter height: ");
	scanf("%f",&height);   
	
	volume=pie*radius_squared*height;
	
	printf("volume is: %f",volume);
	
    return 0;}
    
    
    
    
    
    
    
    