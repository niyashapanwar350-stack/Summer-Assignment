#include<stdio.h> 
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct Employee e[3];
    int i;

    for(i=0;i<3;i++){
        printf("Employee %d\n",i+1);

        printf("ID:");
        scanf("%d",&e[i].id);

        printf("Name:");
        scanf("%s",e[i].name);

        printf("Salary :");
        scanf("%f",&e[i].salary);

    }

    printf("Employee Details:");

    for(i=0;i<3;i++){
        printf("ID:%d",e[i].id);
        printf("Name:%s",e[i].name);
        printf("Salary:%f\n",e[i].salary);
    }
}
