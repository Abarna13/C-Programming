/* QUESTION-3

Write a C program to call function main() recursively. The program should be terminated when the main() function is called during the n th time.Take the help of static variable.

Input Format

5

Constraints

-

Output Format

1 2 3 4 5

Sample Input 0

5
Sample Output 0

1
2
3
4
5
Sample Input 1

3
Sample Output 1

1
2
3
Sample Input 2

4

Sample Output 2

1
2
3
4

*/

/* PROGRAM */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    static int i=1;
    int n;
    scanf ("%d", &n);
    while (i<=n)
    {
        printf ("%d\n", i++);
        main();
    }
    return 0;

    
}
