/* Question-2

Write a C program for the following Scenario: Create a function that passes the Item’s Name, Quantity, and Price. And function should calculate the total amount (Quantity* Price) and print it.

Input Format

xyz
10
15.5

Constraints

-

Output Format

Item name: xyz, Price: 15.50, Quantity: 10
Total Amount: 155.00

Sample Input 0

xyz
10
5.5
Sample Output 0

Item name: xyz, Price: 5.50, Quantity: 10                                                                                                     
Total Amount: 55.00 

Sample Input 1

muruga
5
2.50
Sample Output 1

Item name: muruga, Price: 2.50, Quantity: 5                                                                                                   
Total Amount: 12.50 

*/


/*  PROGRAM */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char a[10];

    int c;

    float b,total;

    scanf("%s",&a);
    
    scanf("%d",&c);

    scanf("%f",&b);
    
    void Amount(char name[10], float price, int quantity)
    
    {
        total=quantity*price;

        printf("Item name: %s, Price: %.2f, Quantity: %d",name,price,quantity);

        printf("\nTotal Amount: %.2f\n",total);

    }
    Amount(a,b,c);
    return 0;

}

    
    

