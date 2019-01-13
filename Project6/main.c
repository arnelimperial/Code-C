
/*
*Author: Arnel Imperial
*
*
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // support boolean


bool even(int x){

    int y = x % 2;
    if(y == 0){
        return true;
    }else{
        return false;
    }

}
int main()
{
    int num;
    bool scan = true;
    printf("Enter an integer: ");
    scanf("%d", &num);

    bool result = even(num);

    if(result == scan){
        printf("The number is 0");
    }else{
        printf("The number is 1");

    }
    return 0;
}
