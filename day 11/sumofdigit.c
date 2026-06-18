#include<stdio.h>
int findsum(int a,int b){
    return a+b;
}
int main(){
    int num1,num2,sum;
    printf("Enter two integers:");
    scanf("%d%d",&num1,&num2);
    sum=findsum(num1,num2);
    printf("The sumof %d and %d is:%d\n",num1,num2,sum);
    return 0; 
}