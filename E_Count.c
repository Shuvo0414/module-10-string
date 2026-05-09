#include <stdio.h>
#include <string.h>
// Question

/*
Given a string S. Print the summation of its digits.

// Input
Only one line contains a string S (1<_|S|<_10^6) where |S| is the length of string.

It's guaranteed that S contains only digits from 0 to 9.

// Output
Print the answer required above.

Example:
Input --> 351
Output--> 9

** Note : first test --> 3+5+1 = 9

*/

int main()
{
    char S[1000001];
    /*
    character array (string)

    maximum size:
    10^6 characters + '\0'

    we use string because each digit
    comes as a character:
    '3', '5', '1'
    */

    scanf("%s", S);
    /*
    take string input

    example input:
    351

    memory becomes:
    ['3', '5', '1', '\0']
    */

    // printf("%d", '0');
    /*
    ASCII value of character '0' is 48

    character digits:
    '0' -> 48
    '1' -> 49
    '2' -> 50
    ...
    '9' -> 57
    */

    int sum = 0;
    // variable to store total sum

    for (int i = 0; i < strlen(S); i++)
    /*
    loop traverses the string one by one

    strlen(S) returns string length

    example:
    "351" length = 3

    so loop runs:
    i = 0,1,2
    */
    {
        sum = sum + (S[i] - '0');
        /*
        VERY IMPORTANT CONCEPT

        S[i] is a character:
        '3'

        But we need integer:
        3

        So:
        '3' - '0'

        ASCII:
        '3' = 51
        '0' = 48

        51 - 48 = 3

        same for:
        '5' - '0' = 5
        '1' - '0' = 1

        Step-by-step example:

        i = 0:
        sum = 0 + ('3' - '0')
        sum = 0 + 3
        sum = 3

        i = 1:
        sum = 3 + ('5' - '0')
        sum = 3 + 5
        sum = 8

        i = 2:
        sum = 8 + ('1' - '0')
        sum = 8 + 1
        sum = 9
        */

        // printf("%d\n", S[i] - '0');
        /*
        this line can be used for debugging

        it prints converted integer digits
        one by one
        */
    }

    printf("%d\n", sum);
    /*
    print final summation

    output:
    9
    */

    return 0;
}