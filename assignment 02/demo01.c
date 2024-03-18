#include<stdio.h>
int main()
{

int a,b,res;
printf("Enter first num:");
scanf("%d",&a);
printf("Enter the second num:");
scanf("%d",&b);


if(b!=0)
{
res=a/b;
printf("res=%d",res);
}
else
{

printf("cant divide by zero");
}
return 0;
}
