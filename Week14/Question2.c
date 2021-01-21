/* QUESTION-2

"Create a Structure named book with bname, author and pages.. Input the data from main() and to print it"

Input Format

java Naughton 886

Constraints

-

Output Format

Book Name: java
Author Name: Naughton
No. of pages: 886

Sample Input 0

java Naughton 886                                                                                                                             

Sample Output 0

Book Name: java                                                                                                                               
Author Name: Naughton                                                                                                                         
No. of pages: 886 
Sample Input 1

C++ balagurusamy 336                                                                                                                         
Sample Output 1

Book Name: C++                                                                                                                                
Author Name: balagurusamy                                                                                                                     
No. of pages: 336 

*/

/* PROGRAM */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct book{
    char bname[100]; 
    char author[50];
    int pages;
    };
int main() { 
    struct book b;
    scanf("%s",b.bname);
    scanf("%s",b.author);
    scanf("%d",&b.pages);
    printf("Book Name: %s\n",b.bname);
    printf("Author Name: %s\n",b.author);
    printf("No. of pages: %d",b.pages);
    return 0;
}
