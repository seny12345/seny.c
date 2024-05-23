#include<stdio.h>
void sum()
{
	int sum;
	float p;
	float r;
	float t;
	float intrest;
	printf("enter the value p :");
	scanf("%f",&p);
	printf("enter the value r :");
	scanf("%f",&r);
	printf("enter the value t :");
	scanf("%f",&t);
	intrest=(p*r*t)/100;
	printf("the intrest is %.2f",intrest);
	
}
int main()
{
	sum();
	
	return 0;
}