//converttocelsius program
/*
Name:don
Reg no:PA106/G/29259/25
Description:a program to compute connvert temperature from fahreneit(F) to celsius(C)
*/

#include<stdio.h>

int main()
{
	float F,C;
	printf("enter F:");
	scanf("%f",&F);
	
	C=(F-32)*5/9;
	
    printf("\ngive C: %2f",C);
    
    return 0;
}