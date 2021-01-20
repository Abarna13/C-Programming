/* Question-3

A firm produces only 30 units of a product per day at a production cost of Rs.50 per unit. The product is perishable and looses its entire value if it is not sold on the same day. It sells the product to only one customer who sends his requirement of the day in the morning. In case the demand is more than 30 units, the supplier procures additional units from outside at a cost of Rs.70 per unit. Write a program to read the demand for any number of days and to calculate the average daily cost. (Hint: use for loop and ternary operator)

Input Format

3 (no. of days)
30 (Day 1 demand)
30 (Day 2 demand)
30 (Day 3 demand)

Constraints

-

Output Format

Total Cost:4500
Average daily cost : 1500.00

Sample Input 0

3
30
30
30
Sample Output 0

Total Cost:4500                                                                                                                               
Average daily cost : 1500.00
Sample Input 1

3
30
30
45
Sample Output 1

Total Cost:5550                                                                                                                               
Average daily cost : 1850.00 
Sample Input 2

3
30
42
30
Sample Output 2

Total Cost:5340                                                                                                                               
Average daily cost : 1780.00

*/

/* PROGRAM */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int days,day1,day2,day3,tot;
     int d1,d2,d3;
    scanf("%d\n",&days);
    scanf("%d\n",&day1);
    scanf("%d\n",&day2);
    scanf("%d\n",&day3);
    if(day1<=30 && day2<=30 && day3<=30){
    printf("Total Cost:%d\n",50*90);
    printf("Average daily cost : %.2f\n",day1*50.00);}
    else if(day1>=30 || day2>=30 || day3>=30 )
    {
        d1=day1-30;
        d2=day2-30;
        d3=day3-30;
    int extra=(d1+d2+d3)*70;
    tot=(90*50)+extra;
    printf("Total Cost:%d\n",tot);
    printf("Average daily cost : %.2f\n",tot/3.00);
    }

    return 0;
}
