//Question-2

//Find Compound interest onRs.1500 at 6.5% per annum for 8 years, compounded annually.(Using Pointers)

//Input Format

//2482.00

//Constraints

//-

//Output Format

//The Compound Interest is Rs : 982.00

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
     float p=1500,r=6.5,n=8,Amount,CI;

     float *p1,*r1,*n1;

     p1=&p;

     r1=&r;

     n1=&n;

     Amount=round(*p1*pow((1+ *r1/100),*n1));

    

     CI=Amount-*p1;

    
     printf("The Compound Interest is Rs : %.2f",CI);
    

     return 0;
}
