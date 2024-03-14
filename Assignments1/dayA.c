#include<stdio.h>
#include"mymath.h"
int main (void)

{
int num;
int base,index;


printf("Enter Num:");
scanf("%d",&num);

printf("%d != %d\n", num,factorial(num));


printf("Enter Base 7 Index:");
scanf("%d %d ", &base, &index);
printf("%d ^ %d = %d\n",base,index,mpower(base,index));

return 0;
}




