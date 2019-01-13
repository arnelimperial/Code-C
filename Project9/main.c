/*
*File: main.C
*Author : Arnel Imperial
*Created: August 31, 2018 @ 21:24
*
*/

/*Finding the factorial from user prompt
*
*
*/

#include <stdio.h>
#include <stdlib.h>

//Declare function
int factorial(int number);

int main(void)
{
    int number, result;
    printf("Enter an integer: ");
    scanf("%d", &number);

    result = factorial(number); //Invoke function
    printf("The factorial of %d is %d\n",number, result);

    return 0;
}


//Statement of the function declared
int factorial(int number){

    int factor =1;  //Initialize local variable to 1 to be use in factorial operation
    for(int i=1; i<= number; ++i){
            factor *= i;

    }
    return factor;

}
