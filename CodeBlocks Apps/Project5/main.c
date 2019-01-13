/*
*
*Author: Arnel Imperial
*
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
    int num1, num2;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   addition(num1, num2);
   subtraction(num1, num2);
   multiplication(num1, num2);
    return 0;
}
