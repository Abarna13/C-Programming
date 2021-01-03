//Question-3

//Write a program for static storage class.

//Input Format

//-

//Constraints

//-

//Output Format

//0 1 2 3

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

void increment(void);
int main()
{
increment();
increment();
increment();
increment();
return 0;
}
void increment(void)
{
static int i = 0 ;
printf ( "%d ", i ) ;
i++;
}