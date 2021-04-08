#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1;
	int number2;
	char operator;
	int result= 0;
	printf("please enter an operator for the operation: ");
	scanf("%c", &operator);
	printf("enter 1st number: ");
	scanf("%d", &number1);
	printf("enter second number: ");
	scanf("%d", &number2);

	if (operator == '+')
	{
		printf("the result of %d + %d is %d", number1, number2, number1 + number2);
	}
	else if (operator == '-')
	{
		printf("the result of %d - %d is %d", number1, number2, number1 + number2);
	}
	else if (operator == '*')
	{
		printf("the result of %d * %d is %d", number1, number2, number1 * number2);
	}
	else if (operator == '/')
	{
		printf("the result of %d / %d is %d", number1, number2, number1 / number2);
	}
	else if (operator == '%')
	{
		printf("the result of %d % %d is %d", number1, number2, number1 % number2);
	}
	else if (operator == '^')
	{
		printf("the result of %d ^ %d is %d", number1, number2, number1 ^ number2);
	}
	else
	{
		printf("invalid operator, %c isn't registered", operator);
	}
}
