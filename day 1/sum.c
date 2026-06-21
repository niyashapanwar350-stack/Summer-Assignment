#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of N natural mubers:");
    return 0;
}