#include<stdio.h>
int main(){
    int a[100],n,i,choice,pos,val;

    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    do{
        printf("\n1. Display\n2. Insert\n3. Delete\n4. SEarch\n5. Exit\n");
        printf("Enter Choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Array:");
            for(i=0;i<n;i++)
            printf("%d",a[i]);
            printf("\n");
            break;
        
        case 2:
        printf("Enter position and value:");
        scanf("%d%d",&pos,&val);
        for(i=n;i>pos-1;i--)
        a[i]=a[i-1];
        a[pos -1]=val;
        n++;
        break;
        
        case 3:
        printf("Enter position :");
        scanf("%d",&pos);
        a[i]=a[i+1];
        n--;
        break;
        
        case 4:
            printf("Enter value to search:");
            scanf("%d",&val);
            for(i=pos -1;i<n-1;i++){
            if(a[i]==val){
                printf("Found at position %d\n",i+1);
                break;
            }
        }
        if(i==n)
        printf("Not Found\n");
        break;

        case 5:
        printf("Exit\n");
        break;

        default:
        printf("Invalid Choice\n");
            
        }
    }
    while( choice != 5);
    return 0;
}