//Question-4

//Vimla purchased a microwave oven with the price Rs. 25,000. If 5% discount was given and 2% CST was paid, then find the amount paid by Vimla?

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
    int amount=25000;
    
    int dis=5;
    
    int cst=2;
        int amount_paid,dis_amt,cst_amt;

    dis_amt=25000*(5.0/100.0);

    cst_amt=25000*(2.0/100.0);

    amount_paid=amount - dis_amt + cst_amt;

    printf("The amount paid by Vimla %d", amount_paid);

    return 0;
}

