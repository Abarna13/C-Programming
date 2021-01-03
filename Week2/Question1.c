//Question-1

//Write a C program for the following: If a is 15 or 12, then what would be the value of: printf("%d",a); printf("%d",++a); printf("%d",a++); printf("%d",--a); printf("%d",a--); printf("%d",a);

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
    scanf("%d",&a);

    printf("%d",a);

    printf("\n%d",++a);

    printf("\n%d",a++);

    printf("\n%d",--a);

    printf("\n%d",a--);

    printf("\n%d",a);
    
    return 0;
}

