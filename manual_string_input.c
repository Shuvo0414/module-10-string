#include <stdio.h>

int main()
{
    char fullName[] = "Shuvo Biswas";
    // source string

    char a[100];
    // destination array where string will be copied

    int i = 0;
    // index variable

    while (fullName[i] != '\0')
    /*
    loop runs until null character is found

    '\0' means end of string in C
    */
    {
        a[i] = fullName[i];
        // copy each character one by one

        i++;
        // move to next index
    }

    a[i] = '\0';
    // manually add null character at the end

    printf("%s", a);
    // print copied string

    return 0;
}