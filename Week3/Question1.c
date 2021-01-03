//Question-1

//Write a Program to Check Whether a Number is Even or Odd using if..else.

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
     int num;

     scanf("%d", &num);

     if(num % 2 == 0)

     printf("%d is even.", num);

     else

     printf("%d is odd.", num);

    return 0;
}
