/* QUESTION-1

Write a C Program with variables x,y and z that have been declared globally, input it in main() and pass it to the function getavg(), to find the average of 3 numbers and return it to print in main().

Input Format

5 3 2

Constraints

-

Output Format

Average :3.000000

Sample Input 0

5
3
2

Sample Output 0

Average :3.000000
Sample Input 1

8
5
12
Sample Output 1

Average :8.000000

*/

/* PROGRAM */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


    int x,y,z;
    float getavg()
    {
        float avg;
        avg=(x+y+z)/3;
        return (avg);
    }
    int main()
    {
        scanf("%d %d %d", &x,&y,&z);
        printf("Average :%f", getavg());
        return 0;
    }
