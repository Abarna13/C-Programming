//Question-2

//What will be the difference between simple & compound interest @10% per annum on a sum of Rs.1000 after 4 year?

//Input Format

//1000 10 4

//Constraints

///-

//Output Format

//The Simple Interest is :400.00
//The Compound Interest is :464.00
//The Amount Difference is : 64.00

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

float Simple_Interest(float p, float r, float No_of_years) {
    float si;
    si=(p*r*No_of_years)/100;
    return si;
}

  







float Compound_Interest(float p, float r, float No_of_years) {
    float ci,amount;
    amount=p * pow((1.00+(r / 100.00)),No_of_years);
    ci=round(amount-p);
    return ci;
}



int main()
{
    float p,r,No_of_years,CI,SI;

    float Difference_Amount;
    
    scanf("%f\n",&p);
    
    scanf("%f\n",&r);
    
    scanf("%f\n",&No_of_years);

    

    SI=Simple_Interest(p,r,No_of_years);

    printf("The Simple Interest is :%.2f",SI);

    CI=Compound_Interest(p,r,No_of_years);

    printf("\nThe Compound Interest is :%.2f",CI);

    Difference_Amount=CI - SI;

    printf("\nThe Amount Difference is : %.2f",Difference_Amount);

    return 0;
}


