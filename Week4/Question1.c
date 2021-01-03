//Question-1

//Find the Smallest number of five digits exactly divisible by 16,24,36 & 54?

//Input Format

//-

//Constraints

//-

//Output Format

//The LCM of n1 ,n2 ,n3 and n4 is 432
//The Smallest no.of.5 digits exactly divisible by 16,24,36 & 54 is 10368

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
     int n1=16,n2=24,n3=36,n4=54,min;

     int S5d=10000,div1,rem;

     if((n1<n2)&&(n1<n3)&&(n1<n4))

     min = n1;

     else if((n2<n3)&&(n2<n4))

     min=n2;

     else if(n3<n4)

     min=n3;

     else

     min=n4;

     while (1) {

     if (min % n1 == 0 && min % n2 == 0 && min%n3==0 && min%n4==0)

     {printf("The LCM of n1 ,n2 ,n3 and n4 is %d", min);

     break;

     }

     ++min;

     }

     rem=S5d%min;

     div1=S5d+min-rem;

     printf("\nThe Smallest no.of.5 digits  exactly divisible by 16,24,36 & 54 is %d",div1);
     

    return 0;
}


