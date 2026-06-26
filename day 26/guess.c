#include<stdio.h>

int main(){
    int secret=25,guess;
    do{
        printf("Guess the number:");
        scanf("%d",&guess);

        if(guess>secret)
        printf("Too high!\n");
        else if (guess<secret)
        printf("Too Low!\n");
        else
        printf("Correct Guess!\n");
    }
    while (guess!=secret);
    
}