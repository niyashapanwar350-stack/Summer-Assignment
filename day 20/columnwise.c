#include<stdio.h>
int main(){
    int r,c,i,j,sum;

    printf("Enter rows and columns:");
    scanf("%d%d",&r,&c);

    int a[r][c];

    printf("ENter matrix elements:");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(int j=0;j<c;j++)
        {int sum=0;
        for(int i=0;i<r;i++)
        sum+=a[i][j];
        printf("sum of column %d=%d\n",j+1,sum);}
    
}