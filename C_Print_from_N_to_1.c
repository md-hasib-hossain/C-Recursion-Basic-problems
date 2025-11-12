#include <stdio.h>

void print_from(int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d", i);
    if (i > 1)
    {
          printf(" ");
    }
    print_from(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_from(n);
    return 0;
}

/*
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
InputCopy
4
OutputCopy
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.
*/