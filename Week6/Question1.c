//Question-1

//write a program for simple arithmetic operation using functions (local variable & global variable scope)

//Input Format

//-

//Constraints

//-

//Output Format

//num1 = 10, num2 = 20 addition = 30 subtraction = -10 multiplication = 200 Division = 0

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
void addition() {
}
void subtraction() {
}
void multiplication() {
}
void division() {
}
int main()
{
    int num1,num2;

    num1 = 10 ;

    num2 = 20 ;

    printf("num1 = %d, num2 = %d", num1, num2) ;

    addition() ;
    {
        printf("\naddition = %d",num1+num2);
    }
    
    subtraction() ;
    
    {
        printf("\nsubtraction = %d",num1-num2);
    }
    
    multiplication() ;
    
    {
        printf("\nmultiplication = %d",num1*num2);
    }
    
    division();
    
    {
        printf("\nDivision = %d",num1/num2);
    }
    return 0;
}
