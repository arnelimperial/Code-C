
/*
*Author: Arnel Imperial
*
*Created: September 1, 2018 @ 02:32 a.m.
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h> // for ceil

int main(void)
{
    int score=1, c=0, i, score1=1, d=0; // Initialize all counters, summations
    float sum=0, sum1=0;
    printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
    while(score >=0){
        printf("Enter score (4-10): ");
        scanf("%d", &score);
        c++; // counter for scores
        sum += score;

        if((score > 10 )|| (score < 4)){
            sum1 += score; //store unacceptable values to other variable
            c--; // subtract unacceptable entries
        }
    }

    printf("You entered %d scores\n", c);
    float initials = sum - sum1;
    float mean = initials/c;
    printf("Average scores: %.2f", ceil(mean)); // float round of to nearest hundredths with ceil()

    return 0;
}
