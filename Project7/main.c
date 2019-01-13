

/* 
 * File:   main.c
 * Author: Arnel Imperial
 *
 * Created on 30 August 2018, 22:52
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

int main(void){
    int num;
    bool scan = true;
    printf("Enter an integer: ");
    scanf("%d", &num);

    bool result = even(num);

    if(result == scan){
        printf("Number %d is even.\n", num);
    }else{
        printf("Number %d is odd.\n", num );

    }
    return 0;
}