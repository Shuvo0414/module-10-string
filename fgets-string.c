#include <stdio.h>

int main()
{
    char a[20]; // string array .

    fgets(a, sizeof(a), stdin); // take full line input including spaces.

    printf("%s", a);

    // input : Shuvo Biswas.

    // output : Shuvo Biswas

    return 0;
}