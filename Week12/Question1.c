/* Question-1

Write a C program to count the number of students having age less than 25 and weight less than 50kg out of five students.(Hint: use do..while)

Input Format

24 51 (age and weight of student 1) 20 45 (age and weight of student 2) 25 52 (age and weight of student 3) 20 35 (age and weight of student 4) 24 54 (age and weight of student 5)

Constraints

-

Output Format

Number of students with age < 25 and weight <50 : 2

Sample Input 0

24 51
20 45
25 51
20 35
24 54
Sample Output 0

Number of students with age < 25 and weight <50 : 2
Sample Input 1

20 28
20 45
24 43
20 35
24 54
Sample Output 1

Number of students with age < 25 and weight <50 : 4

*/

/* Program */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int age,weight,count=0,i=5;
    do
    {
        scanf("%d %d",&age,&weight);
        if(weight<50 && age<25)
            count++;
        
    }
    while (i--);
    printf("Number of students with age < 25 and weight <50 : %d",count);
    
    return 0;
}
