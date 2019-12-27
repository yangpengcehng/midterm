#include <stdio.h>
int main()
{
    int p = 0;
    int q = 0;
    char s;
    while ((s = getchar()) != EOF && s!='\n')
    {
         if (s == 'a' || s == 'A')
        {
            p++;
        }
        if (s == '0')
        {
            q++;
        }
    }
    printf("The number of a is : %d\n", p);
    printf("The numbei of 0 is : %d\n", q);
    return 0;
}
