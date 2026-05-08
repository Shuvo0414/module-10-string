#include <stdio.h>

int main()
{
    char a[6];
    /*
    array size is 6 because:

    "shuvo" contains 5 characters:
    s h u v o

    C strings also require one extra null character '\0'
    at the end of the string.

    So total required size:
    5 + 1 = 6
    */

    scanf("%s", a);
    /*
    no '&' is needed here because
    array name itself acts like the address
    of the first element.

    a == &a[0]

    scanf("%s") automatically adds
    the null character '\0' at the end.
    */

    printf("%s", a);
    /*
    %s prints the complete string.

    printf starts printing from index 0
    and continues until it finds '\0'
    */

    // input: shuvo
    // output: shuvo

    return 0;
}

/*
IMPORTANT CONCEPT:

If we write:

char a[5];

then there is no space for the null character '\0'

because:

"shuvo" = 5 characters
+
'\0'    = 1 extra character

total needed = 6

If array size is smaller than required,
scanf writes outside the array boundary.

This is called:
buffer overflow / undefined behavior

Sometimes the program may still appear to work,
especially on some systems or compilers,
because nearby memory may accidentally be accessible.

But this behavior is unsafe and not guaranteed.

On other systems or online compilers,
it may cause:
- garbage output
- runtime error
- segmentation fault
- program crash

So when using scanf("%s"),
always remember:

required array size =
number of characters + 1 (for '\0')
*/