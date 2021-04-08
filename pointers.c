#include<stdio.h>

int main()
{
	int age=14;
	int * pAge=&age;
	char name[]="James";
	char * pName=&name;
	double average=7.8;
	double * pAverage=&average;
	float gpa=2.3;
	float * pGpa=&gpa;
	
	printf("the memory address of name is %p \n", pName );
	printf("the memory address of average is %p \n", pAverage);
	printf("the memory address of gpa is %p \n", pGpa);
	printf("the memory address of age is %p \n", pAge);
	
	// dereferencing a pointer 
	int myage=30;
	int * pMyage=&myage;
	printf("the dereferencing value is %d", *pMyage);
}
