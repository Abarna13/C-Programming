//Question-6

//Write a Program to print the following using goto statement: We are at first printf statement!!! We are at last printf statement!!!

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
    printf("We are at first printf statement!!!") ;
     

    goto last ;

    printf("We are at second printf statement!!!") ;
     

    printf("We are at third printf statement!!!") ;
     

    last: printf("\nWe are at last printf statement!!!") ;
     

    return 0;
}
