#include<stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
void display(struct Student s[],int n){
    int i;
    printf("Student Records:\n");
    for(i=0;i<n;i++)
    {
        printf("Roll:%d",s[i].roll);
        printf("Name:%s",s[i].name);
        printf("Marks:%f\n",s[i].marks);
    }
}
int main(){
    struct Student s[3];
    int i;
    for(i=0;i<3;i++){
        printf("Student %d",i+1);

        printf("Roll :");
        scanf("%d",s[i].roll);

        printf("Nmae:");
        scanf("%s",&s[i].name);

        printf("Marks:");
        scanf("%f",&s[i].marks);
    }
    display(s,3);
}