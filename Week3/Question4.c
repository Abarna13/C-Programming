//Question-4

//Write a program to read roll no, name and marks of three subjects and calculate the total, percentage and division.

//Input Format

//Input the Roll Number of the student :784 Input the Name of the Student :James Input the marks of Physics, Chemistry and Computer Application : 70 80 90

//Constraints
//-

//Output Format

//Roll No : 784 Name of Student : James Marks in Physics : 70 Marks in Chemistry : 80 Marks in Computer Application : 90 Total Marks = 240 Percentage = 80.00 Division = First

#include <stdio.h>
#include <string.h>

int main()
{
    int rl,phy,che,ca,total;
    float per;
    char nm[20],div[10];
    
    scanf("%d",&rl);
    
    scanf("%s",nm);
    
    scanf("%d%d%d",&phy,&che,&ca);
    total = phy+che+ca;
    per = total/3.0;
    if (per>=60)
     strcpy(div,"First");
    else
    if (per<60&&per>=48)
        strcpy(div,"Second");
    else
        if (per<48&&per>=36)
        strcpy(div,"Pass");
         else
        strcpy(div,"Fail");

       printf("Roll No : %d\nName of Student : %s\n",rl,nm);
       printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n",phy,che,ca);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}
