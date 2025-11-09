#include<stdio.h>

void recursion( int i)
{
    if (i == 0)     // condtion
    {
        return;
    }
    
    printf("%d\n", i);
    recursion(i-1);   //increment / Decrement
}

int main()
{
    int i = 5;
    recursion(i); // starting 
    return 0;
}

// for (int i =0; i <=5; i++)
// for(int i=5; i >=0; i--)