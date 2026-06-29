#include<stdio.h>
struct Book{
    int id;
    char name[50];
};
int main(){
    struct Book b[3];
    int i;

    for(i=0;i<3;i++){
        printf("Enter Book ID:");
        scanf("%d",&b[i].id);

        printf("Enter Book Name:");
        scanf("%s",&b[i].name);
    }
    printf("Library Books:");
    for(i=0;i<3;i++){
        printf("ID:%d.  Name:%s\n",b[i].id,b[i].name);
    }
}