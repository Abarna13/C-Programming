//Question-3

//Ram gets 55 % of total valid votes in an election. If the total votes were 9000, what is the number of valid votes that the other candidate Shyam gets if 30 % of total votes were declared invalid?

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
     int totalvote=9000;
          int invalid_per=30;

     int ram_per=55;

     int shyam_per,valid_per, validvote,shyam_no_of_vote;

     valid_per=100-30;

     validvote=(9000*(70.0/100.0));

     shyam_per=100-55;

     shyam_no_of_vote=(int)(validvote*((shyam_per/100.0)));
                            
     printf("The number of valid votes for Shyam %d",shyam_no_of_vote);

    return 0;
}

