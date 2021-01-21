/* QUESTION-3

Write a C program to read the quantity and price of various Smart TV Models using an array. Compute the total cost of all models.

Input Format

25 25000
15 10000
20 35000
30 40000

Constraints

-

Output Format

Total cost of all TV models : 2675000

Sample Input 0

25 25000                                                                                                                                      
15 10000                                                                                                                                      
20 35000                                                                                                                                      
30 40000   
Sample Output 0

Total cost of all TV models : 2675000
Sample Input 1

10 25000
15 30000
20 33000
25 40000
Sample Output 1

Total cost of all TV models : 2360000

*/

/* PROGRAM */


#include<stdio.h>

#include<string.h>

#include<math.h>

#include<stdlib.h>

int main()

{

int i;

long tv[4][2];

long  t=0;

for (i=0;i<4;i++)

{

scanf("%ld %ld",&tv[i][0],&tv[i][1]);

}

for (i=0;i<4;i++)

{

t+=tv[i][0] * tv[i][1];

}

printf("Total cost of all TV models : %ld",t);

return 0;

}
   
    