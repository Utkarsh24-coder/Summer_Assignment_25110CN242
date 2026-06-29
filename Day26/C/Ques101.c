#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int no,no_of_guesses=0;
    int randomno=(rand()%100)+1;// rand() generates random no
    // printf("Random no between 1-100 is:%d",randomno);
    printf ("Let's play guess the no game !\n");
    do{
        printf("Guess the no:");
        scanf("%d",&no);
        if(no>randomno){
            printf("Lower no please!\n");
        }
        else if(no<randomno){
            printf("Higher no please!\n");
        }
        else{
            printf ("Congrats!!\n");
        }
    no_of_guesses ++;
   }while(no!=randomno);
   printf("You completed the game in %d no of guesses...",no_of_guesses);

    return 0;

}