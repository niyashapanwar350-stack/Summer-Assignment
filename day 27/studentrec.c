#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;

};
int main(){
    struct Student s;
    printf("Enter Roll No:");
    scanf("%d",&s.roll);

    printf("Enter Name:");
    scanf("%s",s.name);

    printf("Enter Marks:");
    scanf("%f",&s.marks);

    printf("\n---Student Record---\n");
    printf("roll No:%d\n",s.roll);
    printf("Name:%s\n",s.name);
    printf("Marks :%f\n",s.marks);
}