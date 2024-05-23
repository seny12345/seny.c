#include<stdio.h>
#include<conio.h>
void main()
{
    float p;
    float r;
    float t;
    float i;
    clrscr();
    printf("Entre the value p :");
    scanf("%f",&p);
    printf("Enter the value r :");
    scanf("%f",&r);
    printf("Enter the value t :");
    scanf("%f",&t);
    i=p*r*t/100;
    printf("the value is %f",i);
    getch ();
}