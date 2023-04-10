#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 48 && c <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (c >= 'A' && c <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        if (c >= 'a' && c <= 'z')
        {
            printf("IS SMALL\n");
        }
        {
            /* code */
        }
    }
    return 0;
}
