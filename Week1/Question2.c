//Question-2

//Vikram buys an old scooter for Rs. A and spends Rs. B on its repairs. If he sells the scooter for Rs. C , what is his gain %? Write a program to compute the gain %. Input Format: The first input is an integer which corresponds to A. The second input is an integer which corresponds to B. The third input is a float which corresponds to selling price

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
     int sp,cp,repair,gain;

     float gp;

     scanf("%d",&cp);

     scanf("%d",&repair);

     scanf("%d",&sp);

     gain=(sp-(cp+repair));

     gp=(float)gain/(cp+repair)*100;

     printf("The gain percentage is= %0.02f",gp);

    return 0;
}





