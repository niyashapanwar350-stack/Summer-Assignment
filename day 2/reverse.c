#include<stdio.h>
int main(){
    int n,temp,digit,reverse=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        digit=temp%10;
        reverse=reverse*10+digit;
        temp=temp/10;
    }
    printf("number=%d\n",n);
    printf("after reverse=%d\n",reverse);

}