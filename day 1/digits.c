#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter an integer:");
    scanf("%d",&num);
    num=num;
    do{
        count++;
        num/=10;
    }while(num!=0);{
        printf("the number%d has %d digits\n",num,count);
        
    }



}