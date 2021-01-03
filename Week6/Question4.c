//Question4

//Develop a small bank application with two operations(1 for withdraw and 2 for deposit). Initial balance is 1000.

//Input Format

//2 2000 1 1000

//Constraints

//-

//Output Format

///Balance after deposit 3000
//Balance after withdrawl 2000


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int amount=1000,deposit,withdraw;
    int option1,option2;
    scanf("%d",&option1);
    scanf("%d",&deposit);
    scanf("%d",&option2);
    scanf("%d",&withdraw);
    int tot=amount+deposit;
    printf("Balance after deposit %d\n",tot);
    printf("Balance after withdrawl %d",tot-withdraw);
   
    return 0;
}


