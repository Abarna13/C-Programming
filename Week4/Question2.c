//Question-2

//This program will calculate the number of ways i.e. permutations in which the train will stop. Here, the train will travel from point X to Y. Between these points, there are n stations. The train will stop on r stations of these n stations given the conditions that while stopping on r stations the train should not stop in two consecutive stations. This permutation can be found using the direct npr formula. Let's take a few examples, Input : n = 16 , r = 6 Output : 462 Explanation − The number of ways the train can stop at 6 stops out of 16 stops fulfilling the condition is found using the permutation formula given by npr or p(n, r) = n! ∕ (n-r)!

//Input Format

//16 6

//Constraints

//-

//Output Format

//Total number of stations = 6
//Number of stopping station = 16 Possible ways = 462

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
     int n , s;

     scanf("%d",&n);

     scanf("%d",&s);

     printf("Total number of stations = %d\nNumber of stopping station = %d", s, n);
     
     int p = s;

     int num = 1, dem = 1;

     while (p!=1) {

    dem*=p;

    p--;

    }

    int t = n-s+1;

    while (t!=(n-2*s+1)) {

    num *= t;

    t--;

    }

    if ((n-s+1) >= s)

    printf("\nPossible ways = %d", num / dem);

    else

    printf("no possible ways");

    return 0;
}


