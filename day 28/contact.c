#include<stdio.h>
#include<string.h>

struct Contact{
char name[50];
char phone[15];
};
int main(){
    struct Contact c[100];
    int n=0,choice,i;
    char search[50];

    while(1){
        printf("\n1.Add Contact\n2.Display Contacts\n3.Search Contact\n4.Exit\n");
        printf("Enter Choice");
        scanf("%d",&choice);

        switch (choice){
            case 1:
            printf("Enter Name:");
            scanf("%[^\n]",c[n].name);
            printf("Enter Phone:");
            scanf("%s",c[n].phone);
            n++;
            break;

            case 2:
            for(i=0;i<n;i++)
            printf("\nName:%s\nPhone:%s\n",c[i].name,c[i].phone);
            break;

            case 3:
            printf("Enter Name to Search:");
            scanf("%[^\n]",search);

            for(i=0;i<n;i++){
                if(strcmp(c[i].name.search)==0){
                    printf("Phone:%s\n",c[i].phone);
                    break;
                }
            }
            if(i==n)
            printf("Contact Not Found!\n");
            break;
            case 4:
            return 0;
            default:
            printf("Invalid Choice!\n");
        }
    }
}