#include<stdio.h>
int main(){
    int n,i,evencount=0,oddcount=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("Total even elements=%d\n",evencount);
    printf("Total odd elements=%d",oddcount);
}