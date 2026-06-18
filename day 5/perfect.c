#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;

        }
    }
    if(sum==sum)
        printf("%d is a prefect square\n",num);
    else
        printf("%d is not a perfect square\n",num);
    

}