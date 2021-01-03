//Question-1

//Swapping of two numbers using functions.

//Input Format

//35 45

//Constraints

//-

//Output Format

//45 35

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
void funswap(int *, int *);
int main()
{


    int num1, num2;
    
    scanf("%d", &num1);
    
    scanf("%d", &num2);
    

    funswap(&num1, &num2);

    printf("%d %d",num1,num2);

    return 0;
}

void funswap(int *num1, int *num2)
{
    int tmp;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}


