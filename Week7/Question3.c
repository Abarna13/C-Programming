//Question-3

//Write a program for addition of two Matrices(2*2).

//Input Format

//1 2 3 4

//5 6 7 8

//Constraints

//-

//Output Format

//6 8 10 12



#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()

{

    int a[2][2], b[2][2], i, j, c[2][2];

    for(i=0; i<2; i++)

    {

        for(j=0; j<2; j++)

            scanf("%d",&a[i][j]);

    }

    for(i=0; i<2; i++)

    {

        for(j=0; j<2; j++)

            scanf("%d",&b[i][j]);

    }

    for(i=0; i<2; i++)

    {

        for(j=0; j<2; j++)

            c[i][j]=a[i][j]+b[i][j];

    }

   for(i=0; i<2; i++)

    {

        for(j=0; j<2; j++)

            printf("%d ",c[i][j]);

        printf("\n");

    }

    return 0;

}
    


