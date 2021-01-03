//Question-5

//There are two sections A and B of a class, consisting of 36 and 44 students respectively. If the average weight of section A is 40 kg and Average weight of B section is 35 kg. Find the Average Weight of the Whole class?

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a=36;
    
    int b=44;
    
    int avga=40;
    
    int avgb=35;
    
    int avg;
    
    avg=(a*avga)+(b*avgb);
    
    float tavg;
    
    tavg=(avg/(a+b))+0.50;
    
    printf("Average Weight of Whole Class(A & B) is: %0.02f" ,tavg);
    
    return 0;
}
