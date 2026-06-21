#include<stdio.h>
int main(){
    int i,n;
    int fact=1;
    printf("enter an integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;

    }
    printf("factorial of %d=%d\n",n,fact);
}