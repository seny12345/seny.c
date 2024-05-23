#include <stdio.h>
int main()
{
    int a[3][3];
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("enter the elemant of %dand%d",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
   for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(a[i][j]==0)
             
            printf(" ");
            else{
                printf("%d",a[i][j]);
            }
            
		}
		printf("\n");
   }
    return 0;
}
