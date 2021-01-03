//Question-3

//Evaluate : 10C3?

//Input Format

//10 3

//Constraints

//-

//Output Format

//The value of C(10,3) is: 120

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



int fact(int num) 
{
    if(num == 0)
        
        return 1;
    else
        
        return (num*fact(num-1));
    
}



int main()
{
    int n, r;
    
    int ncr_var;
    
    scanf("%d%d",&n,&r);
    
    
  
    ncr_var = fact(n) / (fact(r) * fact(n - r));
    
    scanf("%d",&ncr_var);

    
    printf("The value of C(%d,%d) is: %d",n,r,ncr_var);
     

    return 0;
}
