#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, min;
    // check max
    if (a >= b && a >= c)
    {
        max = a;
    }

    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    // min check
    if (a <= b && a <= c)
    {
        min = a;
    }

    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    printf("%d %d", min, max);
    return 0;
}
