//Given int a = 1, b = 2, c = 3 ; What is the value of this expression? k = ++a * b - c--; What are the new values of k, a, b, and c?

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a , b, c  ;
    scanf("%d %d %d",&a,&b,&c);

    int k= ++a * b - c--;
     
    printf("%d",a);
     
    printf("\n%d",b);
     
    printf("\n%d",c);
    
    printf("\n%d",k);
    return 0;
}
