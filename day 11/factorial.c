#include<stdio.h>
 int findfactorial(int n){
   int factorial=1;
   if(n<0){
    return-1;
   }
   for(int i=1;i<=n;i++){
    factorial*=i;
   }
   return factorial;
}
int main(){
    int num;
    int fact;
    printf("Enter an integer:");
    scanf("%d",&num);
    fact = findfactorial(num);
    if(fact==-1){
        printf("factorial of a negavtive number doesn't exist\n");
    }
    else{
        printf("Factorial of %d is:%d\n",num,fact);
    }
}