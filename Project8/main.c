/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 9page
 *
 * Created on 30 August 2018, 23:13
 */

#include <stdio.h>
#include <stdlib.h>


/*
 * 
 */

void comments(char gender, int age){
    //gender in ASCII value DEC
    
    if((gender == 109) && (age >=0) && (age <=55)){
        printf("You are man in your best years!");
    }else if((gender == 109) && (age >=56) && (age <=100 )){
        printf("You are a wise man!");
    }else if((gender == 102) && (age >=0) &&(age <=55)){
         printf("You are a beauty!");
    }else if((gender == 102) && (age >=56) && (age <=100)){
        printf("You look young for your age!");
    }else{
        printf("An error occurred in the program");
    }
    
    
}
int main(void) {
    char gender;
    int age;
    printf("Are you a male or female (m/f)? ");
    scanf("%c", &gender);
    printf("Enter your age: ");
    scanf("%d", &age);
    comments(gender, age);
    return 0;
}

