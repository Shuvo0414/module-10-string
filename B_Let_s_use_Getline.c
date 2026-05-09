#include <stdio.h>

// Question.

/*
Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

Hint : use getline(cin,s).

//Input
Only one line contains a string S (1<_|S|<_10^6) where |S| is the length of string.

Its guaranteed that S will contain '\' symbol.

//Output
Print the answer required above.

Examples : 

Input --> Egyptian collegiate programming\ contest
Output--> Egyptian collegiate programming

//another exampels 

Input --> google \or facebook
Output--> google

*/




int main ()
{
    char S[1000001];
    fgets(S, sizeof(S) , stdin);

    for (int i = 0; S[i] != '\\' ; i++)
    {
        printf("%c", S[i]);
    }
    

    return 0;
}