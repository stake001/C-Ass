#include <stdio.h>
int main()
{
    unsigned int n;
    printf("enter the integer:\n");
    scanf("%d", &n);

    int count = 0; // for initial stage

    while (n != 0)
    { // if n will make 0 it will break the loop instantly
        if (n & 1 == 1)
        {            // if anding gives the result 1
            count++; // then increase the count
        }
        n = n >> 1; // right shift
    }
    printf("no of bits those are in its binary representation : %d\n", count);
    // printf("in its binary representation:%d\n",count);

    return 0;
}
