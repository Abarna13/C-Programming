//Question-3

//Write a program to Copy String Without Using strcpy().

//Input Format

//Enter string s1:saveetha

//Constraints

//-

//Output Format

//String s2:saveetha

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
     char s1[100], s2[100];
    int i;

 

     fgets(s1, sizeof(s1), stdin);
      for ( i = 0; s1[i] != '\0'; ++i) {

     s2[i] = s1[i];

     }

     s2[i] = '\0';

     printf("String s2");
    for(i=15;s2[i]!='\0';i++){
        printf("%c",s2[i]);
    }
    

    return 0;
}

    
    


