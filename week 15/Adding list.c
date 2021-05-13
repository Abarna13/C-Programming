#include<stdio.h>
int main()
{
    int x = 0;
    int sum =0;
    int testEOF;
    printf("Enter your numbers: <EOF> to stop.\n");
    do
    {
        testEOF = scanf("%d", &x);
        if (testEOF != EOF)
            sum += x;
    } while (testEOF != EOF);
    printf("\nTotal: %d\n", sum);
    return 0;
}