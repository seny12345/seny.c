#include<stdio.h>
int main()
{
	  int n;
  printf("enter the elemant in the arra:");
  scanf("%d",&n
  int arr[n];
  printf("enter the elemant in the array: \n");
  for(int i=0;i<n;i++){
	  scanf("%d",arr[i]);
  }
  int sum=0;
  for(int i=0; i<n;i++){
      sum+=arr[i];
      
  }
    printf("sum of all elemant in the :%d\n",sum);
	
	return 0;
}
