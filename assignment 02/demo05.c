#include<stdio.h>
int main()
{
int num1,num2,num3,res;
here:
printf("enter the first num:");
scanf("%d",&num1);
printf("enter the second num:");
scanf("%d",&num2);
printf("enter the third num:");
scanf("%d",&num3);


res=(num1>num2>num3) ? num1:num2;

if(num1>=num2)
{ 
printf("num1 is greater%d\n",num1);
}
else if(num2>=num3)
{
printf("num2 is greater%d\n",num2);
}
else
{
printf("num3 is grater\n",num3);

printf("\n");

goto here;

return 0;
}
}
