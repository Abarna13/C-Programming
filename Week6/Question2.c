//Question-2

//write a program for auto storage class variable

//Input Format

//-

//Constraints

//-

//Output Format

//0 0 0 0

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
void increment() {
}
int main()
{
    increment();

    increment();

    increment();
    
    int i = 0 ;
    
    printf ( "%d ", i ) ;
    
    i++;
    
    increment();
    {
        int i = 0;
        printf("%d ", i) ;
    }
    
    increment();
    {
        int i = 0;
        printf("%d ", i);
    }
    
    increment();
    
    {
        int i = 0;
        printf("%d ", i);
    }
    return 0;
}


