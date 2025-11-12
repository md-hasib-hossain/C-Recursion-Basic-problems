#include <stdio.h>

void digit_recursion(int r)
{
    if (r == 0)
    {
        return;
    }
    digit_recursion(r / 10);
    int last_digit = r % 10;
    printf("%d ", last_digit);
}

int main()
{
    int t_case;
    scanf("%d", &t_case);
    for (int i = 0; i < t_case; i++)
    {
        int n;
        scanf("%d", &n);
        if (n==0)
        {
            printf("0");
        }
        
        digit_recursion(n);
        printf("\n");
    }

    return 0;
}
/*
Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.

Example
InputCopy
3
121
39
123456
OutputCopy
1 2 1
3 9
1 2 3 4 5 6
*/