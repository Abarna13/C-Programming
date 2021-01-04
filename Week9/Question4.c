//Question-4

//Write a program to compare the two strings using strncmp().

//Input Format

//s1=program s2=programming

//Constraints

//-

//Output Format

//string s1 and string s2 are equal

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100];    
    scanf("%s",s1); 
    scanf("%s",s2);

    if( strcmp(s1,s2) == 0 )
        printf("string s1 and string s2 are not equal\n");
    
   else
        printf("string s1 and string s2 are equal\n");
    return 0;
}


