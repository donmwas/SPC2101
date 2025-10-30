//unitsconsumed program
/*
Name:don
Reg:PA106/G/29259/25
Description:a program to compute unitsconsumed
8
*/

#include<stdio.h>
int main()
{
	float unitsconsumed,totalbill;
	printf("enter unitsconsumed: ");
	scanf("%f",&unitsconsumed);
	
	if(unitsconsumed<=100)

	{
		totalbill=unitsconsumed*10;
		}
	else if(unitsconsumed<=200)
	{
		totalbill=(unitsconsumed-100)*15;
	}
	else
	{
		totalbill=(unitsconsumed-200)*20;
	}
	printf("\ntotalbill %2f",totalbill);
	return 0;
}