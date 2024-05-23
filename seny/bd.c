#include <stdio.h>
int main()
{
    int a[3][3];
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            printf("enter the elemant of %dand%d",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
   for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            printf("%d",a[i][j]);
		}
		printf("\n");
   }
    return 0;
}
