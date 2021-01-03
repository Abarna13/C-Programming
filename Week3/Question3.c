//Question-3

//A man buys an article for rs: 27.50 and sold for rs :28.60 calculate the gain percentage?

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float cost_price;
    float selling_price;
    float Gain;
    float Gain_percentage;
    scanf("%f %f",&cost_price,&selling_price);
    Gain = selling_price-cost_price;
    scanf("%f",&Gain);
    Gain_percentage=((Gain/cost_price)*100);
    scanf("%f",&Gain_percentage);
    if (Gain_percentage>=2.00)
        printf("Gain percentage: %0.02f.",Gain_percentage);
    else
        printf("ain percentage: %0.02f",Gain_percentage);
    return 0;
}
