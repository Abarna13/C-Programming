//Question-2

//Which is greatest in 16 ⅔ percentage, 2/15 and 0.17?

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
     float a=(float)16/100+(float)2/3/100 ;

     float b=(float)2/15;

     float c=0.17;

     if( a>=b && a>=c )
         printf("a is greatest Value :%f",a);

     else if( b>=c )
         printf("b is greatest Value :%f",b);
         printf("c is greatest Value :%f",c);

    return 0;
}
