//while_loop program
/*
Name:don
Reg no:PA106/G/29259/25
Description:program to compute account_balance
*/
#include<stdio.h>
int main()
{
	float account_balance,withdraw;
	printf("enter yuor account_balance");
	scanf("%f",&account_balance);
	
	while(account_balance>0)
	{
		printf("enter amount to withdraw");
		scanf("%f",&withdraw);
		
	account_balance-=withdraw;
		
		if(account_balance>0)
		{
			printf("remaining account_balance:%2f\n",account_balance);
			}
			else{
				printf("account_balance is now %2f\n",account_balance);
				printf("account_balance is zero or negative no more withdrawals allowed/n");
				}
	}
				return 0;
}