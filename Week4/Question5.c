//Question-5

//Write a program To find HCF (Highest Common Factor) of two numbers.

//Input Format

//20 24

//Constraints

//-

//Output Format

//4


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
     int i, n1, n2, j, hcf=1;

     scanf("%d", &n1);

     scanf("%d", &n2);

     j = (n1<n2) ? n1 : n2;

     for(i=1; i<=j; i++)

     {

     if(n1%i==0 && n2%i==0)

     {

     hcf = i;

     }

     }

    printf("%d", hcf);
    
    return 0;
}


