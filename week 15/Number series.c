#include<stdio.h>
int main(void)
{
    int limit;
    printf("\n Please enter the limit: ");
    scanf("%d", &limit);
    for(int i = 1; i <= limit; i++)
    {
        printf("\t%d\n", i);
    }
    return 0;
}