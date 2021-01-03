//Question-5

//Write a Program to Make a Simple Calculator Using switch...case

//Input Format

//* 2 8

//Constraints

//-

//Output Format

//2 * 8 = 16

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
     char operator;

     int first, second;

     scanf("%c", &operator);

     scanf("%d %d", &first, &second);

     switch (operator) {

     case '+':

     printf("%d + %d = %d", first, second, first + second);

     break;

     case '-':

     printf("%d - %d = %d", first, second, first - second);

     break;

     case '*':

     printf("%d * %d = %d", first, second, first * second);

     break;

     case '/':

     printf("%d - %d = %d", first, second, first / second);

     break;

     default:

     printf("Error! operator is not correct");

     }

    return 0;
}


