#include<stdio.h>
int maxnum(int a, int b)
{
	if (a>b)
	{
		printf("%d is greater", a);
	}
	else if (a<b)
	{
		printf("%d is greater", b);
	}
	else
	{
		printf("both %d and %d are equal", a, b);
	}	
}
int main()
{
	int a;
	int b;
	printf("enter value for a: ");
	scanf("%d", &a);
	printf("enter value for b: ");
	scanf("%d", &b);
	maxnum(a,b);
}
