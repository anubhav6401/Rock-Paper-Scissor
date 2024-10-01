#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randomnumber(int a)
{
    srand(time(NULL)); // RETURNS A RANDOM NUMBER
    return rand() % a;
}

int main()
{
    int n, a, b, d;    // ab store the points
    int sumcomp = 0;   // to store score of computer
    int sumplayer = 0; // to store the score of player
    char s1[24];       // name array
    int s3;            // to take input from user for rock paper scissor
    printf("Enter your name\n");
    gets(s1);
    printf("%s is going to play the game: rock paper scissor with computer\n", s1);

    for (int i = 1; i <= 3; i++)
    {
        n = randomnumber(27); // will return a random ingteger
        printf("%d\n", n);

        if (n >= 0 && n <= 9)
        {
            printf("Computer have decided his move\n");
            //char s2[5] = "rock";
            int x = 2; // rock choosen by comp

            printf("%s  now its your turn, choose rock or paper or scissor\n", s1);
            //printf("Enter\n S for scissor\n R for rock \n P for paper\n");
            printf("Enter\n 1 for scissor\n 2 for rock \n 3 for paper\n");
            printf("enter letter is uppercase please\n");

            scanf("%d", &s3);
            printf("%s you have choosen\n", s1);
            printf("its %d\n", s3);

            if (s3 == 2)
            {
                printf("%s your ooponent which is computer have choosen rock.\n", s1);
                printf("%s also chooses Rock.\n", s1);
                printf("no one wins it results in a draw.\n");
                a = 0;
                b = 0;                     // no win as a and b are 0
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
            else if (s3 == 3)
            {
                printf("%s your ooponent which is computer have choosen rock.\n", s1);
                printf("%s  chooses Paper.\n", s1);
                printf("Paper wins, it  means %s wins and computer loose\n", s1);
                a = 0;
                b = 1;                     // player wins
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
            else
            {
                printf("%s your ooponent which is computer have choosen rock.\n", s1);
                printf("%s chooses scissors.\n", s1);
                printf("rock wins, it means %s loose and computer wins.\n", s1);
                a = 1;
                b = 0;                     // computer wins
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
        }
        else if (n > 9 && n <= 18)
        {
            printf("Computer have decided his move\n");
            //char s2[7] = "paper";
            int y = 3; // paper

            printf("%s  now its your turn, choose rock or paper or scissor\n", s1);
            //printf("Enter\n S for scissor\n R for rock \n P for paper\n");
            printf("Enter\n 1 for scissor\n 2 for rock \n 3 for paper\n");
            printf("enter letter is uppercase please\n");

            scanf("%d", &s3);

            printf("%s you have choosen\n", s1);
            printf("its %d\n", s3);

            if (s3 == 3)
            {
                printf("%s your ooponent which is computer have choosen paper.\n", s1);
                printf("%s also chooses paper.\n", s1);
                printf("no one wins it results in a draw.\n");
                a = 0;
                b = 0;                     // no win as a and b are 0
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
            else if (s3 == 1)
            {
                printf("%s your ooponent which is computer have choosen paper.\n", s1);
                printf("%s  chooses scissor.\n", s1);
                printf("scissor wins, it  means %s wins and computer loose\n", s1);
                a = 0;
                b = 1;                     // player wins
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
            else
            {
                printf("%s your ooponent which is computer have choosen paper.\n", s1);
                printf("%s chooses rock.\n", s1);
                printf("paper wins, it means %s loose and computer wins.\n", s1);
                a = 1;
                b = 0;                     // no win as a and b are 0
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
        }
        else if (n > 18 && n <= 27)
        {
            printf("Computer have decided his move\n");
            char s2[8] = "scissor";
            int z = 1; // scissor

            printf("%s  now its your turn, choose rock or paper or scissor\n", s1);
            //printf("Enter\n S for scissor\n R for rock \n P for paper\n");
            printf("Enter\n 1 for scissor\n 2 for rock \n 3 for paper\n");
            printf("enter letter is uppercase please\n");

            scanf("%d", &s3);
            printf("%s you have choosen\n", s1);
            printf("its %d\n", s3);

            if (s3 == 1)
            {
                printf("%s your ooponent which is computer have choosen scisssor.\n", s1);
                printf("%s chooses scissor.\n", s1);
                printf("no one wins it results in a draw.\n");
                a = 0;
                b = 0;                     // no win as a and b are 0
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
            else if (s3 == 2)
            {
                printf("%s your ooponent which is computer have choosen scisssor.\n", s1);
                printf("%s  chooses rock.\n", s1);
                printf("Rock wins, it  means %s wins and computer loose\n", s1);
                a = 0;
                b = 1;                     // player wins
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
            else
            {
                printf("%s your ooponent which is computer have choosen scisssor.\n", s1);
                printf("%s chooses paper\n.", s1);
                printf("scissor wins, it means %s loose and computer wins.\n", s1);
                a = 1;
                b = 0;                     // computer wins
                sumcomp = sumcomp + a;     // score of computer
                sumplayer = sumplayer + b; // score of player
            }
        }
    }
    if (sumcomp > sumplayer)
    {
        printf("computer score is %d\n %s score is %d\n", sumcomp, s1, sumplayer);
        printf("computer wins and %s looses.\n", s1);
    }
    else if (sumcomp < sumplayer)
    {
        printf("computer score is %d\n %s score is %d\n", sumcomp, s1, sumplayer);
        printf("computer looses and %s wins.\n", s1);
    }
    else
    {
        printf("computer score is %d\n %s score is %d\n", sumcomp, s1, sumplayer);
        printf("no one wins, game draw.\n");
    }
}
