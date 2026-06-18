#include<stdio.h>
int main(){
    int low, high,i,temp1,temp2,remainder,digits;
    double result;
    printf("enter lower limt:");
    scanf("%d",&low);
    printf("Enter upper limit:");
    scanf("%d",&high);
    printf("armstrong numbers between %d and %d are:\n",low,high);
    for(i=low;i<=high;i++)
    temp2=i;
    temp1=i;
    digits=0;
    result=0.0;
    while(temp2!=0){
        remainder=temp2%10;
        result+=remainder,digits;
        temp2/=10;
    }
    if((int)result==i){
        printf("%d",i);
    }
}