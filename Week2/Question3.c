//Question-3

//Write a program to take input of rollno and marks obtained by a student in 3 subjects of 100 marks each and display the rollno with percentage score secured.

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
    int rollno;

    float sub1, sub2, sub3,  sum, score;

    scanf("%d", &rollno);
    
    scanf("%f%f%f", &sub1, &sub2, &sub3);

    sum=sub1+sub2+sub3;

    score = (sum/300)*100;

    printf("Roll Number: %d", rollno);
    
    printf("\nPercentage score secured: %2.2f%c", score,'%');
     

    return 0;
}

