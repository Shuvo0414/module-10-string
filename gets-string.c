#include <stdio.h>

int main()
{
    char a[20]; // string array

    gets(a);
    // take full line input including spaces

    printf("%s", a);

    /*
    gets() is not standard/recommended for modern use
    because it does not check array size limit.

    So buffer overflow may happen
    if user inputs more characters than array size.
    */

    return 0;
}