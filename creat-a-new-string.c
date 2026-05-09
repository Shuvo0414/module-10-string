#include <stdio.h>
#include <string.h>

// Questions.

/*
Given two string S and T . Print 2 lines that contain the following in the same order .

1. Print the lenght of S and T separated by a space.
2.Print a new string that contains S and T separated by a space.

//Input : 
The first line contains string S (1<_|S|<_10^3) where |S| is the length of S.

The second line contains a string T (1<_|T|<_10^3) where |T| is the length of T.

//Output
Print the answer required above. 

Examples : Input --> LEVEL
                     ONE
           Output --> 5 3
                     LEVEL ONE

*/



int main ()
{
    char S[1001], T[1001];
    scanf("%s %s", S, T);

    int lenS = strlen(S);
    int lenT = strlen(T); 

    printf("%d %d\n", lenS, lenT);
    printf("%s %s\n", S, T);

    return 0;
}