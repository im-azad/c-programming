#include <stdio.h>
int main()
{

    // print 1 to 5000 digit summations;
    int i,j=0;
    
    for(i=1; i <=5000; i++) {
        j +=i;
    }
    printf("summations of 1 to 5000 is = %d", j);
    return 0;
}