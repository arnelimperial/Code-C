#include <stdio.h>
#include <stdlib.h>
int numbers(int entry){
    return entry;
}


double numDecimal(double num1){
    int num2, num3, num4;
    float result;

    num2 = num1*1000;
    num3 = num2%10;
    num4 = num2/10;
    if(num3>= 5)
        num4++;

     num1 = num4/100;
     result = float(num1)

     return num1;

}

int main(void){
    int num;
    double decimals;
    printf("Enter an integer: ");
    scanf("%d", &num );
    printf("Enter a decimal number: ");
    scanf("%lf", &decimals);
    int result1 = numbers(num);
    printf("You entered the integer: %d\n", result1);

    double Rounded_Num = numDecimal(decimals);
    printf("You entered the decimal number, rounded to two decimal places: %.2lf", round(Rounded_Num));
    return 0;

}

