//simple water bill program
/*
Name:
Reg no:
Description:program to compute water bill 
*/

#include<stdio.h>

int main()
{
	float waterunits;
	float totalbill;
	
	printf("enter waterunits consumed:",waterunits);
	scanf("%f",&waterunits);
	
	if(waterunits<=30)
	{
		totalbill=waterunits*20;
	}
	else if(waterunits<=60)
	{
		totalbill=waterunits*25;
	}
	else
	{
		totalbill=waterunits*30;
	}
	printf("total water bill:%.2f",totalbill);
	
	return 0;
}
		
		
			