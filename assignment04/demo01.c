// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("enter the num:");
//     scanf("%d", &num);
//     int result = fact(num);
//     printf("factorial of %d is %d", num, result);
// }
// int fact(int num)
// {
//     if (num == 0){
//         return 1;
//     }
//     return num * fact(num - 1);
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num");
    scanf("%d", &n);
    int result = fact(n);
    printf("factorial of %d is %d", n, result);
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}