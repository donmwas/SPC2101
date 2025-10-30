//password
/*
Name:don
Reg no:PA106/G/29259/25
Description:program to compute the user to enter his paasword
*/

#include <stdio.h>

int main()
{
	int password;
	do
	{
		printf("enter the paasword:");
		scanf("%d",&password);
	
		if(password!=1234){
			printf("access denied\n");}
		else
		{
			printf("access granted"); 
		}
	}while(password!=1234);
	return 0;}
