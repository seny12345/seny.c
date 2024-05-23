

#include <stdio.h>

    
int main()
{
    int a;
    int b;
    int *prt1
     int *ptr2;
     *ptr1=a;
    *ptr2=b;
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
     *ptr1=*ptr1-*ptr2;
     *ptr1=*ptr2;
     *ptr2=*ptr1;
    printf("enter the value of a :");
    scanf("%d",&a);
     printf("enter the value of b :");
    scanf("%d",&b);
    
     printf("the value of ptr1 %d\n",*ptr1);
    printf("the value of ptr2 %d\n",*ptr2);
    
    
    return 0;
}
