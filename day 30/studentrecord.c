#include<stdio.h>
struct Student {
    int roll;
    char name;
    float marks;
};
int main(){
    struct  Student s[5];
    int i;

    printf("Enter detalis of 5 students\n");

    for(i=0;i<5;i++){
        printf("\nStudent %d\n",i+1);
        printf("Roll :");
        scanf("%d",&s[i].roll);

        printf("Name:");
        scanf("%s",&s[i].name);

        printf("Marks:");
        scanf("%f",&s[i].marks);
    }
    printf("\nStudent Records:\n");

    for(i=0;i<5;i++){
        printf("Roll :%d",s[i].roll);
        printf("Name:%s",s[i].name);
        printf("Marks:%f",s[i].marks);
    }
}