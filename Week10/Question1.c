//Question-1

//Create a program using structure for employee details.

//Input Format

//saveetha 27 90000

//Constraints

//-

//Output Format

//saveetha 27 90000

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
    struct employee

    {   

    char name[20];

    int age;

    int salary;

    };

    struct employee person;

    scanf("%s", person.name);
          
    scanf("%d", &person.age);
          
    scanf("%d", &person.salary);
    
    printf("%s %d %d",person.name,person.age,person.salary);
    
    return 0;
}


