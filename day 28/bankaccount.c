#include<stdio.h>
int main(){
    float balance = 0,amount;
    int choice;
    while(1){
        printf("\n1.Deposit\n2.Withdraw\n3.Check Balance\n4.exit\n");
        printf("Enter Choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter AMount :");
            scanf("%f",&amount);
            balance+=amount;
            break;

            case 2:
            printf("Enter Amount:");
            scanf("%f",&amount);
            if(amount<=balance)
            balance-=amount;
            else
            printf("Insufficient Balance!\n");
            break;

            case 3:
            printf("Balance =%f\n",balance);
            break;

            case 4:
            return 0;
        
        default:
        printf("Invalid Choice!\n");
            break;
        }
    }
}