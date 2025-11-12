#include <stdio.h>

int count_vowel(char S[], int i)
{
    if (S[i] == '\0')
    {
        return 0;
    }
    int count = count_vowel(S, i + 1);
    if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' || S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char S[201];
    fgets(S, 201, stdin);
    int result = count_vowel(S, 0);
    printf("%d", result);
    return 0;
}
/*
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
InputCopy
Data Structure Lab
OutputCopy
6
*/