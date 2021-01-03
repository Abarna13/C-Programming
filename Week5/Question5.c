//Question-5

//Find the sum of digits of a number using recursion?

//Input Format

//25

//Constraints

//-

//Output Format

//7

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int num, result;
    scanf("%d", &num);
    scanf("%d", &result);
    result = sum(num);
    printf("%d\n", result);
    return 0;
}
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }

}
