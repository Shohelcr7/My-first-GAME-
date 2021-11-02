//Write a C program to make simple GAME of  guessing  number ?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
included stdlib.h library to use rand() function to generate random number
included time.h library to change generated random number after a specified time frame (here after every 0 SECONDS)

*/


// function to guess the number

void fun_guess(int x)
{
    int next_guess,correct;
    srand(time(0));  // intializing rand() with every 0 second a new number will generate
    correct=rand(); // rand() function will generate random number
    correct=correct%100+1; // to minimize range of the number from 1 to 100
    do
    {
        if (x==correct)
        {
            printf (" Congrats! you guessed the correct number\n\n");
            break;
        }
        else if (x>correct)
        {
            printf (" Ops! The  number  you guessed is greater than correct number.Lets try another\n\n");
            scanf("%d",&x);
            continue;

        }
        else if (x<correct)
        {
            printf (" Ops! The  number  you guessed is smaller than correct number. Lets try another\n\n");
            scanf("%d",&x);
            continue;
        }
        else {;}

    }
    while (1);
}

int main ()

{
    int number;

    printf (" Lets play Guessing Game .Please enter an integer\n\n");
    scanf("%d",&number);
    fun_guess(number);




    return 0;

}
