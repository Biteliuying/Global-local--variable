#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a, b;
void number()
{
	a = 1;
	b = 2;
}
void keepgoing()
{
	a = 100;
	b = 200;
}
int main()
{
	number();
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	keepgoing();
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
