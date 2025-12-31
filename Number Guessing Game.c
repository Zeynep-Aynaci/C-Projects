#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include<time.h>

int main()
{
    printf("*************************************\n");
    printf("*Welcome to the Number Guessing Game*\n ");
    printf("*************************************\n\n");

    int i,guessnumber,correctnumber,score=100;
    srand(time(NULL));
    correctnumber=rand()%100+1;
    printf("I have chosen a number between 1 and 100\n");
    printf("guess this number :");
    scanf("%d",&guessnumber);
    while(guessnumber!=correctnumber){
        if(guessnumber<correctnumber){
        printf("please enter a higher number : ");
        scanf("%d",&guessnumber);}
        else{
            printf("please enter a smaller number : ");
            scanf("%d",&guessnumber);
        }
        score-=10;
    }
    printf("\n\nCongratulations,you found the correct number.\n");
    printf("Your score is : %d",score<0 ? 0:score);

    return 0;
}
