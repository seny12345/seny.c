#include<stdio.h>

int fact(int n)
{
	return n>0?n*fact(n-1):1;
}

int main()

{
	int n,ans;
	
	printf("enter the valyu of number");
	
	scanf("%d",&n);
	
	ans=fact(n);
	
	printf("factorial of %d is %d",n,ans);
	
	return 0;
}