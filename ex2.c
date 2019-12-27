#include <stdio.h>
#define MAXLINE 9
int main()
{
    char s[MAXLINE], t[MAXLINE], a;
    int m, n;
    float k, p = 0, l = 0;
    for (m = 0; m < 10; m++)
    {
        if ((s[m] = getchar()) == ' ')
        {
            break;
        }
        p = p * 10 + (s[m] - '0');
    }
    if (s[m] == ' ')
    {
        for (n = 0; n < 10; n++)
        {
            if ((t[n] = getchar()) == ' ')
            {
                break;
            }
            l = l * 10 + (t[n] - '0');
        }
        if (t[n] == ' ')
        {
            a = getchar();
            if (a == '+')
                k = p + l;
            if (a == '-')
                k = p - l;
            if (a == '*')
                k = p * l;
            if (a == '/')
            {
                if (l == 0)
                {
                    printf("Error:can not divide a number by 0!\n");
                    return 0;
                }
                else
                    k = p / l;
            }
        } 
    }
    printf("The expression has a value of: %.1f\n", k);
    return 0;
}
