#include<stdio.h>
#include<string.h>
struct Book {
    int id;
    char name[50];
    char author[50];
};
int main(){
    struct Book b[100];
    int n=0,choice,i,id;
    while(1){
        printf("\n1.Add Book\n2.display books\n3.Search Book\n4.Exit\n");
        printf("Enter Choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter Book ID:");
            scanf("%d",&b[n].id);
            printf("Enter Book name:");
            scanf("%[^\n]",b[n].author);
            n++;
            break;

            case 2:
            for(i=0;i<n;i++)
            printf("Enter Book ID:");
            scanf("%d",&id);
            for(i=0;i<n;i++){
                if(b[i].id==id){
                    printf("Book:%s\n Author :%s\n",b[i].name,b[i].author);
                    break;
                }
            }
            if(i==n)printf("Book not found.\n");
            break;

            case 4:
            return 0;

            default :
            printf("Invalid choice!\n");
    }
}}