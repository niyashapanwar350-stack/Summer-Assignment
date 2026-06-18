#include<stdio.h>
int findmaximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int num1,num2,max;
    printf("Enter two integers:");
    scanf("%d%d",&num1,&num2);
    max=findmaximum(num1,num2);
    printf("The maximum numberis:%d\n",max);
}