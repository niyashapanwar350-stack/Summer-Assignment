#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int choice;

    printf("Enter first string:");
    scanf("%s",s1);

    do{
        printf("\n1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                   printf("Length=%1u\n",strlen(s1));
                   break;
            case 2:
                   strcpy(s2,s1);
                   printf("Copied String=%s\n",s2);
                   break;
            case 3:
                   printf("Enter Second string:");
                   scanf("%s",s2);
                   strcat(s1,s2);
                   printf("Result =%s\n",s1);
                   break;
            case 4:
                   printf("Enter second string;");
                   scanf("%s",s2);
                if(strcmp(s1,s2)==0)
                   printf("Strings are Equal");
                else
                    printf("String are Not Equal\n");
                     break;
            case  5:
                   printf("Exit\n");
                   break;
            default:
                   printf("Invalid Choice\n");           
        }
    }
    while(choice !=5);
    return 0;
}