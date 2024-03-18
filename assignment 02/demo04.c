#include<stdio.h>
int main()
{
int num1,num2;

printf("enter the first num:");
scanf("%d",&num1);
printf("enter the second num:");
scanf("%d",&num2);

if((num1>num2 || num2>num1))
{
if(num1>num2)
{
printf("num1 is greater",num1);
}
else{
printf("num2 is greater",num2);
}
}


return 0;
}
