#include<stdio.h>
#include<stdio.h>
int main()
{
      int coin1=1;
      int coin2=2;
      int coin5=5;
      int coin10=10;
      int coin20=20;
	  int value;
    
    printf("enter the value :");
    scanf("%d",value);
	for(coin20<=value){
		coin20--;
	}
	printf("the value is %d",value);
	return 0;
}