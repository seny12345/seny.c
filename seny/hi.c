#include<stdio.h>
void sum()
{
	int sum;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");		
	}
}
int main()
{
	sum();
	
	return 0;
}