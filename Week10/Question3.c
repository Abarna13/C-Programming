//Question-3

//create a program using union to check the memory allocation.

//Input Format

//-

//Constraints

//-

//Output Format

//After making x = 2:
//x = 2, y = 2
//After making y = 10:
//x = 10, y = 10



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
    union test

    {
            int x, y;
    };
    union test t;
    
    t.x = 2;

    printf("After making x = 2:\n x = %d, y = %d",t.x, t.y);

    t.y = 10;

    printf("\nAfter making y = 10:\n x = %d, y = %d",t.x, t.y);
    return 0;
}


