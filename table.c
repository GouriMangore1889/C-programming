#include<stdio.h>
int main()
{
    int i,n,table;
    printf("enter the number=");
    scanf("%d",&n);
    printf("\ntable of %d is :",n);
    for(i=1;i<=10;i++)
    {
    	table=i*n;
    	printf("\n%d",table);
	}
}
