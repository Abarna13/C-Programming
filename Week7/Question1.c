//Question-1

//Write a program to store elements in an array and print it.

//Input Format

//1 2 3 4 5

//Constraints

//-

//Output Format

//a[0]=1 a[1]=2 a[2]=3 a[3]=4 a[4]=5


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int arr[10];
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    for(int i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n",i, arr[i]);
    }
    return 0;
}

