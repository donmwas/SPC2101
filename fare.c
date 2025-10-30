//calculatefare program
/*
Name:Don
Reg no:PA106/G/29259/25
Description:aprogram to compute calculatefare
*/

#include<stdio.h>
int main()
{
	float distance,totalfare;
	printf("enter distance travelled in kilometers:");
	scanf("%f",&distance);
	
	totalfare=distance*50;
	
	printf("totalfare %f",totalfare);
	
	return 0;
	
}