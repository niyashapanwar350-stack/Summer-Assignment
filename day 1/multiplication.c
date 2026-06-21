#include<stdio.h>
int main(){
    int i,n;
    printf("enter an interger:");
    scanf("%d",&n);
    printf("multiplication table:");
    for(i=1;i<=10;i++)
    {
        printf("%d x %d=%d\n",n,i,n*i);
    }
}