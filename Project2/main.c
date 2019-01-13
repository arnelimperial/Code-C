#include <stdio.h>
#include <stdlib.h>

float convertFIM(int num1){
    int num2, num3, num4;
    float entry, entry1;
    num2 = num1*1000;
    num3 = num2%10;
    num4 = num2/10;
    if(num3>= 5)
        num4++;

     entry = num4/100;
     //printf("\nFIM converted to euro: %.2f", entry1);
     return entry;

}

int main()
{
    int fIM;
    float converted;
    printf("Enter an amount in FIM: ");
    scanf("%f", fIM);
    converted = fIM/5.94573;
    float result = convertFIM(converted);
    printf("FIM converted to euro: %.2f", result);
    return 0;
}
