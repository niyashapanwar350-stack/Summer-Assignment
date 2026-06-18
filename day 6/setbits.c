#include<stdio.h>
int main(){
    int num ,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0){
        if(num%2==1)
        count++;
        num=num/2;
    }
    printf("number of set bits:%d\n",count);
}
