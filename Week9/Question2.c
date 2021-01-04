//Question-2

//Write a program to find length of string with out using string function.

//Input Format

//saveetha

//Constraints

//-

//Output Format

//8

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 

{
    
char str[100];
    
int i;

scanf("%s", str);

for(i = 0; str[i] != '\0'; ++i);

printf("%d", i);
      
return 0;
}


