//Question-4

//A man bought 20 shares of Rs.50 at 5 discount, the rate of dividend being 13.5%.The rate of interest obtained is?

//Input Format

//No.of.share=20 Each share=50 discount=5 rate of dividend=13.5%

//Constraints

//-

//Output Format

//Investment is :900.00
//The Facevalue is :1000.00
//The Dividend Amount is:135.00
//The Rate of Interest is :15.00 Percentage


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num,Eshare,discount;
    
    float Rdividend;
    
    float investment,fvalue,dividend,Rinterest;
    
    scanf("%d%d%d%f",&num,&Eshare,&discount,&Rdividend);
    
    investment = (num * (Eshare - discount));
    
    fvalue = (Eshare * num);
    
    dividend = ((Rdividend) *(fvalue/100));
    
    Rinterest = ((dividend *  100)/ investment);
    
    printf("Investment is :%.2f\n",investment);
    
    printf("The Facevalue is :%.2f\n",fvalue);
    
    printf("The Dividend Amount is:%.2f\n",dividend);
    
    printf("The Rate of Interest is :%.2f Percentage",Rinterest);
    
    return (0);
}


