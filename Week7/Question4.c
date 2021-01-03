//Question-4

//Write a program to Calculate Sum & Average of an Array.

//Input Format

//10 20 30 40 50

//Constraints

//-

//Output Format

//Sum : 150 Average : 30


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, n=5, sum=0,average;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum : %d", sum);
    average = sum/n;
    printf("\nAverage : %d",average);
    return 0;
}
    

 

    

 



   



