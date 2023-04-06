#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    scanf("%d", &n);
    if (n > 0 && n <= 1000)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 5 == 0)
            {
                printf("%d ", i);
                printf("Yes\n");
            }
            else
            {
                printf("%d ", i);
                printf("No\n");
            }
        }
    }

    return 0;
}
