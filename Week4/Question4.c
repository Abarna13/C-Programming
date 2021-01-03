//Question-4

//Write a program To find the sum of first 10 natural numbers.

//Input Format

//-

//Constraints

//-

//Output Format

//The Sum is : 55

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
     int  j, sum = 0;

     for (j = 1; j <= 10; j++)

     sum = sum + j;
    
     scanf("%d",&sum);

     printf("The Sum is : %d", sum);
     

    return 0;
}


