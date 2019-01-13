/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 9page
 *
 * Created on 28 August 2018, 23:21
 */

#include <stdio.h>

void squareFunction(int num){
    int result = num * num;
    printf("%i", result);
}


int main(void) {
    int entry, solution;
    printf("Enter an integer:");
    scanf("%i", entry);
   printf("The square of the number you entered is ");
   squareFunction(entry);
    return 0;
}

