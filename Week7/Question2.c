//Question-2

//Write a program in C to find the sum of all elements of the array?

//Input Format

//10 20 30

//Constraints

//-

//Output Format

//60

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
#define MAX_SIZE 100



int main()
{
    int arr[MAX_SIZE];
    int i, n=3, sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);

    return 0;
}


