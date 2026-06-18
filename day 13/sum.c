#include<stdio.h>
int main(){
    int n,i;
    float avg;
    int sum=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum/n;
    printf("sum=%d\n",sum);
    printf("Average =%f\n",avg);
}