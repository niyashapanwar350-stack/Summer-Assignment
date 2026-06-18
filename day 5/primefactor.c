#include<stdio.h>
int main(){
    int num,i,largestprime=1;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        while(num%i==0){
            largestprime=i;
            num/=i;
        }
    }
    printf("Largest prime factor=%d\n",largestprime);
}