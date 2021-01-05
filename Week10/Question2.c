//Question-2

//Create a program using structure and array for 3 employee details.

//Input Format

//1 john clerk 5000 2 sam pieon 2000
//3 jack casier 6000

//Constraints

//-

//Output Format

//Employee 1
//1 john clerk 5000
//Employee 2
//2 sam pieon 2000
//Employee 3
//3 jack casier 6000


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

    int emp_id;

    char name[50];

    char designation[50];

    int salary;

    };
    
    int i;
    
    struct employee emp;
    
    for(i=0; i<1; i++)
        
    {
        
    scanf("%d %s %s %d", &emp.emp_id, emp.name, emp.designation, &emp.salary);
    
    printf("Employee %d", emp.emp_id);
    
    printf("\n%d %s %s %d", emp.emp_id, emp.name, emp.designation, emp.salary);
      
    }
        
    for(i=1; i<2; i++)
        
    {
        scanf("%d %s %s %d", &emp.emp_id, emp.name, emp.designation, &emp.salary);
        printf("\nEmployee %d", emp.emp_id);
    
        printf("\n%d %s %s %d", emp.emp_id, emp.name, emp.designation, emp.salary);
    }
    for(i=1; i<2; i++)
    {
        scanf("%d %s %s %d", &emp.emp_id, emp.name, emp.designation, &emp.salary);
        printf("\nEmployee %d", emp.emp_id);
        printf("\n%d %s %s %d", emp.emp_id, emp.name, emp.designation, emp.salary);
    }
    return 0;
}






