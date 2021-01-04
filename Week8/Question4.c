//Question-4

//Double pointer (pointer to pointer)

//Complete the program by using double pointer.Address of a is stored in p1 and address of p1 is stored in p2.

//Input Format

//-

//Constraints

//-

//Output Format

//Value of a (using p1): 100 Value of a (using p2): 100 Value of a: 200 Value of a: 200


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
     int a;

     int *p1;

     int **p2;

     p1=&a;

     p2=&p1;

     a=100;

     printf("Value of a (using p1): %d\n",a);
     

    
     printf("Value of a (using p2): %d\n",a);
    

     *p1=200;

     printf("Value of a: %d\n",*p1);
     

     **p2=200;

     printf("Value of a: %d",**p2);
     

    return 0;
}


