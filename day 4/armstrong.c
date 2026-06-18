#include<stdio.h>
int main(){
    int num,originalnum,remainder,digit=0,result;
    printf("Enter an integer:");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0){
        originalnum/=10;
        digit++;

    }
    originalnum=num;
    while (originalnum!=0)
    {
        remainder=originalnum%10;
        result+=(remainder,digit);
        originalnum/=10;
    }
    if((int)result==num){
    printf("%d is an armstrong number\n",num);}
    else{
        printf("%d is not an armstrong number\n",num);
    }
    
}