//Question - 1

//John can design a website in 8 days. Sam can do the same work in 5 days. Write a program to calculate the number of websites a company can produce in 30 days, if both Sam and John are employed together.


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
    float johnPerDay = 1.0f / 8.0f;
        float samPerDay = 1.0f / 5.0f;

    float bothPerDay = johnPerDay + samPerDay;

    printf("In 30 days: ");

    printf("%d",(int)(30 * bothPerDay));
    
    return 0;
}

