#include<stdio.h>
int product(int x,int y)
{
	return x * y;
}
int substract(int x,int y)
{
	return x - y;
}
int sum(int x,int y)
{
	return x + y;
}
int main()
{
	int a,b;
	printf("Enter the a and b:\n");
	scanf("%d%d",&a,&b);
	printf("The product of a and b: %d\n",product(a,b));
	int x,y;
	printf("Enter the a and b:");
	scanf("%d%d",&x,&y);
	printf("The product of a and b: %d\n",substract(x,y));
	int i,j;
	printf("Enter the a and b:");
	scanf("%d%d",&i,&j);
	printf("The product of a and b: %d\n",sum(i,j));
	
}