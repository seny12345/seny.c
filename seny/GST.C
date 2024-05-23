#include<stdio.h>
#include<conio.h>

void main()
{
   int rate,qty,amt,billamt,netbill;
   float dis5;
   float gst18;
   clrscr();
   printf("enter the value of rate:");
   scanf("%d",&rate);
   printf("enter the qty:");
   scanf("%d",&qty);
   amt=rate*qty;
   dis5=amt*0.05;
   billamt=amt-dis5;
   gst18=billamt*0.18;
   netbill=billamt+gst18;
   printf("rate\tqty\tamt\tdis5\tbillamt\tgst18\tnetbill");
   printf("\n%d\t%d\t%d\t%.0f\t%d\t%.0f\t%d",rate,qty,amt,dis5,billamt,gst18,netbill);

  getch ();
}
