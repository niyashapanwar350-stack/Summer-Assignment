#include<stdio.h>
int main(){
    int x,n,result=1,i;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        result=result*x;
    }
    printf("%d raised to the power %d=%d\n",x,n,result);
}