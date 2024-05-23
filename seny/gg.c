#include<stdio.h>
int main()
{
  char c=65;
   for(int i=65;i<=69;i++){
   for(int j=65;j<=i;j++){
   printf("%c",i);
   c++;
   }
   printf("\n");
   }
   return 0;
}