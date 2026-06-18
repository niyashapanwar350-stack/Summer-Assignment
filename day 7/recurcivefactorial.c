
#include<stdio.h>
int factorial(int n){
    if(n==0 ||n==1)
    return 0;
    else
    return n * factorial(n-1);
}
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<0){
        printf("Factorail is not defined for negative numbers\n");
    }
    else{
        printf("Factorial of %d=%d\n",num,factorial(num));
    }
    return 0;}