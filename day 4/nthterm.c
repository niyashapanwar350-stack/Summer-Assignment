#include<stdio.h>
int main(){
    int i,n,t1=0,t2=1,nthterm=0;
    printf("enter the position(n) of the Fibonacci term:");
    scanf("%d",&n);
    if(n<=0){
        printf("Enter a positive integer greater than 0\n");
        return 0;
    }
    else if(n==1){
        nthterm=t1;
    }
    else if(n==2){
        nthterm=t2;
    }
    else{
        for(i=3;i<=n;i++){
            nthterm=t1+t2;
            t1=t2;
            t2=nthterm;
        }
    }
    printf("The %dth Fibonacci term is:%d\n",n,nthterm);
}