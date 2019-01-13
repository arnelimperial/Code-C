/*
*file: main.C
*Author: Arnel Imperial
*Created: August 31, 2018 @ 17:37
*/

#include <stdio.h>
#include <stdlib.h>

void addition(int num1, int num2){
    int temp1 = num1;
    int temp2 = num2;
    int concatenation = temp1 + temp2;
    printf("\n%d + %d = %d\n", temp1, temp2, concatenation);
}

void subtraction(int num1, int num2){
    int temp1 = num1;
    int temp2 = num2;
    int difference = temp1 - temp2;
    printf("%d - %d = %d\n", temp1, temp2, difference);
}

void multiplication(int num1, int num2){
    int temp1 = num1;
    int temp2 = num2;
    int product = temp1 * temp2;
    printf("%d * %d = %d\n", temp1, temp2, product);
}

int main()
{
    int integer1, integer2, selection;
    printf("1: subtraction\n2: addition\n3: multiplication\nSelect a function: ");
    scanf("%d", &selection);

    if((selection <=0) || (selection >3)){
            printf("Wrong selection\n");
            printf("1: subtraction\n2: addition\n3: multiplication\nSelect a function: ");
            scanf("%d", &selection);
    }

            if((selection ==1) || (selection == 2) || (selection == 3)){
                printf("Enter the first number: ");
                scanf("%d", &integer1);
                printf("Enter the second number: ");
                scanf("%d", &integer2);

                switch(selection){
                    case 1:
                        subtraction(integer1, integer2);
                        break;

                    case 2:
                        addition(integer1, integer2);
                        break;

                    case 3:
                        multiplication(integer1, integer2);
                        break;

                    default:
                        printf("Wrong selection!\n");
                        break;
                        }
            }


    else{
        printf("Enter the first number: ");
        scanf("%d", &integer1);
        printf("Enter the second number: ");
        scanf("%d", &integer2);
        switch(selection){
    case 1:
        subtraction(integer1, integer2);
        break;

    case 2:
        addition(integer1, integer2);
        break;

    case 3:
        multiplication(integer1, integer2);
        break;

    default:
        printf("Wrong selection!\n");
        break;
        }
    }

return 0;
}

