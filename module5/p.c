#include <stdio.h>
int main()
{
   int num, digit;
   scanf("%d",&num);
   // 1st digit give
   digit = num / 1000;
   if(digit % 2 == 0) {
    printf("EVEN");
   }
   else {
    printf("ODD");
   }
    return 0;
}
