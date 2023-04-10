#include <stdio.h>
int main()
{
    char cha;
    scanf("%c", &cha);
    if (cha >= 'a' && cha <= 'z')
    {
        int ans = cha - 32;
        printf("%c", ans);
    }
    else
    {
        int ans = cha + 32;
        printf("%c", ans);
    }

    return 0;
}
