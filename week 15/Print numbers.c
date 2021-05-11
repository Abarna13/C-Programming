#include<stdio.h>
int main(void)
{
    int num;
    int linecount;
    print("Enter the integer number between 1 and 100: ");
    scanf("%d", &num);
    if(num>100)
       num = 100;
       linecount = 0;
       while (num>0)
       {
        if(linecount < 10)
           linecount++;
           else
           {
               printf("\n");
               linecount = 1;
           }
           printf("%4d", num--);
        }
        return 0;
}
