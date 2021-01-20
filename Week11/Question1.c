/*Question-1

Write a C Program for the following Scenario: Siva bought 17 Laptops altogether and his friend taken 8 laptops. How many laptops are left with Siva?

Input Format

17 8

Constraints

-

Output Format

Remaining Laptops available with siva : 9

Sample Input 0

17
8
Sample Output 0

Remaining Laptops available with siva : 9
Sample Input 1

26
8

Sample Output 1

Remaining Laptops available with siva : 18

*/

/* PROGRAM : */ 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a = 17;
    
    int b = 8;
    
    int c;
    
    c = a-b;
    
    printf("Remaining Laptops available with siva : %d",c);

        
    return 0;
}
