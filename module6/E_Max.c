#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    // int max = 0;
    int max= INT_MIN, min= INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);

    return 0;
}
