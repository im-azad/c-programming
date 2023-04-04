#include <stdio.h>
int main()
{
    int i,num;
    scanf("%d", &num);
    for(i=1; i<=num; i++) {
        if(i % 2 == 0) {
            printf("number is even %d \n", i);
        }
        else {
             printf("number is odd %d \n", i);
        }
    }
    return 0;
}