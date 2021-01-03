//Question-3

//Write a Program for a sum of digits using do..while

//Input Format

//12345

//Constraints

//-

//Output Format

//Thw Sum is = 15

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
     int num,sum;
    
     scanf("%d", &num);
    
     sum = 0;
    
     do
     {
         sum += num %10;
         
         num /= 10;
         
         
     }while (num > 0);
    
    if(sum>=10)
        
    {
        printf("The Sum is = %d",sum);
    }
    
    else
    {
        printf("Thw Sum is = %d",sum);
    }
    return 0;
}


