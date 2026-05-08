#include <stdio.h>

int main()
{
    char a[6] = "shuvo";
    /*
    "shuvo" contains 5 characters:
    s h u v o

    In C, strings always end with a null character '\0'

    So the compiler automatically stores:
    {'s', 'h', 'u', 'v', 'o', '\0'}

    That is why array size must be 6:
    5 characters + 1 null character
    */

    /*
    We can print each character using a loop

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }
    */

    printf("%s", a);
    /*
    %s is used to print a complete string

    printf starts printing from index 0
    and continues until it finds the null character '\0'

    So we do not need a loop here
    */

    return 0;
}