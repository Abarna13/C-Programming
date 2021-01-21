/* QUESTION-1

Program to swap two arrays using pointers

Input Format

10 20 30 40 50 60 70 80 90 100(1st Array) 2 5 7 4 8 1 3 6 9 0 (2nd Array)

Constraints

-

Output Format

Source array before swapping: 10 20 30 40 50 60 70 80 90 100 Destination array before swapping: 2 5 7 4 8 1 3 6 9 0

Source array after swapping: 2 5 7 4 8 1 3 6 9 0 Destination array after swapping: 10 20 30 40 50 60 70 80 90 100

Sample Input 0

10
10 20 30 40 50 60 70 80 90 100 
2 5 7 4 8 1 3 6 9 0
Sample Output 0

Source array before swapping: 10 20 30 40 50 60 70 80 90 100 
Destination array before swapping: 2 5 7 4 8 1 3 6 9 0 

Source array after swapping: 2 5 7 4 8 1 3 6 9 0 
Destination array after swapping: 10 20 30 40 50 60 70 80 90 100 
Sample Input 1

5
1 2 3 4 5 
5 15 25 35 45 
Sample Output 1

Source array before swapping: 1 2 3 4 5 
Destination array before swapping: 5 15 25 35 45 

Source array after swapping: 5 15 25 35 45 
Destination array after swapping: 1 2 3 4 5 

*/

/* PROGRAM */

#include <stdio.h>
#define MAX_SIZE 100 
void inputArray (int *arr, int size);
void printArray (int *arr, int size);
void swapArray (int *sourceArr, int *destArr, int size);

int main()
{
int sourceArr[MAX_SIZE];
int destArr[MAX_SIZE];
int size;

scanf ("%d", &size);
inputArray (sourceArr, size);
inputArray (destArr, size);

printf ("Source array before swapping: ");
printArray (sourceArr, size);

printf  ("\nDestination array before swapping: ");
printArray (destArr, size);
    
swapArray (sourceArr, destArr, size);
printf ("\n\nSource array after swapping: ");
printArray (sourceArr, size);

printf  ("\nDestination array after swapping: ");
printArray (destArr, size);

return 0;
}
void inputArray (int *arr, int size)    
{
int *arrEnd = (arr + (size - 1));
while (arr <= arrEnd)
scanf ("%d", arr++);   
}
void printArray (int *arr, int size)  
{
int *arrEnd = (arr + (size - 1));
while (arr <= arrEnd)
printf ("%d ", *( arr++));
}
    
void swapArray (int *sourceArr, int *destArr, int size) 
{

int *sourceArrEnd = (sourceArr + (size - 1));
int *destArrEnd = (destArr + (size - 1));

while (sourceArr <= sourceArrEnd && destArr <= destArrEnd)
{
*sourceArr ^= *destArr;
*destArr ^= *sourceArr;
*sourceArr ^= *destArr;
sourceArr++;
    
    
destArr++;

}
}







    
    
