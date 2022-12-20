#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int secretNumber = 5;
    int guess;
    int guessCount =0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    printf("Enter a secret number: ");
        scanf("%d", &guess);

    while(guess != secretNumber && outOfGuesses ==0){
        if(guessCount < guessLimit){
            printf("please try again: ");
            scanf("%d", &guess);
            guessCount++;
        }else{
            outOfGuesses = 1;
        }

    }
    if(outOfGuesses ==1){
        printf("Out of Guesses");
    }else{
        printf("Congrats, you win");
    }


    return 0;
}
