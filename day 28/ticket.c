#include<stdio.h>
int main(){
    int seats=10;
    int choice,num;

    while(1){
        printf("\n1.Book Ticket\n2.cancel Ticket\n3.Avaiable seats\n4.Exit\n");
        printf("Enter choicee:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("How many tickets?");
            scanf("%d",&num);
            if(num<=seats){
                seats -=num;
                printf("Booking Successful");

            }
            else
            {
                printf("Not enough seats");
            }
            break;

            case 2:
            printf("How many tickets to cancel?");
            scanf("%d",&num);
            seats+=num;
            if(seats>10)
            seats=10;
            printf("Cancellation Successful!\n");
            break;

            case 3:
            printf("Available Seats:%d\n",seats);
            break;

            case 4:
            return 0;
            
            default :
            printf("Invalid Choice!\n");
            
            
        }
    }

}