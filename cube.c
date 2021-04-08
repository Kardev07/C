#include<stdio.h>
int cubeofnum(int);
int main()
{
	int number;
	printf("enter a number to be cubed: ");
	scanf("%d", &number);
	printf("the result is: %d", cubeofnum(number));
}
int cubeofnum(int number)
{
	int result = number * number * number;
	return result;
}
