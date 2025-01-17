#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);
	if(a>b&&a>c)
	 printf("%d is largest no.",a);
	else if(b>a&&b>c)
	 printf("%d is largest no.",b);
    else
	 printf("%d is largest no.",c);
}
