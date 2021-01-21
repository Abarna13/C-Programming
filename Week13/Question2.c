/* QUESTION-2

Write a c program to read five integer numbersthrough the keyboard. Compute & display addition of even numbers and product of odd numbers. (Hint: use 1d- array)

Input Format

1 2 3 4 5

Constraints

-

Output Format

Addition of Even Numbers : 6 Product of Odd Numbers : 15

Sample Input 0

1
2
3
4
5
Sample Output 0

Addition of Even Numbers : 6
Product of Odd Numbers : 15
Sample Input 1

3
4
5
6
7
Sample Output 1

Addition of Even Numbers : 10
Product of Odd Numbers : 105

*/

/* PROGRAM */



#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
    
{
    int a=0,p=1,n[5],i;
    for(i=0;i<5;i++)
        {
        scanf("%d", &n[i]);
    }
    for(i=0;i<5;i++)
    {
        if(n[i]%2==0)
            a+=n[i];
        else
            p*=n[i];
    }
    printf("Addition of Even Numbers : %d\n",a);
    printf("Product of Odd Numbers : %d",p);
    return 0;
}
