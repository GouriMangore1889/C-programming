#include<stdio.h>
int main()
{
	float dA,wA,balance;
	balance=4000;
	int x;
	printf("1.Deposit Amount\n2.withdraw\n3.check Balance\n4.exit\n");
	do{
	
	printf("\nenter the choice=");
	scanf("%d",&x);
	switch(x)
	{
		case 1:printf("\nenter the amount=");
		       scanf("%f",&dA);
		       balance=balance+dA;
	           printf("Total balance is %f",balance);
	           break;
		case 2:printf("enter the amount=");
		       scanf("%f",&wA);
		       balance=balance-wA;
		       printf("Total balance is %f",balance);
		       break;
		case 3:printf("Total balance is %f",balance);
		       break;
		default:printf("Exit");
		
	}
    }
	while(x!=4);
}
