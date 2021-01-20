/* Question-2

Write a C Program to read three real numbers namely a,b,c and evaluate t1 are expressed as follows: t1 = a* (b+c) + b * ( a+c) + c * (a+b); then print the value of t1 rounded off to three places after the decimal point.

Input Format

2.00 4.00 6.00

Constraints

-

Output Format

t1 = 88.000

Sample Input 0

2.00
4.00
6.00
Sample Output 0

t1 = 88.000
Sample Input 1

3.0
5.0
6.0
Sample Output 1

t1 = 126.000

*/

/* PROGRAM */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float a = 2.00, b = 4.00, c = 6.00;
    
    float t1;
    
    
    scanf ("%f%f%f" ,&a,&b,&c);
    
    t1 = a * (b+c) + b * (a+c) + c * (a+b);
    
    printf("t1 = %0.03f", t1);
    
    return 0;
}
