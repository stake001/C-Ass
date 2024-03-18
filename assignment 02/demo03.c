#include<stdio.h>
int main()
{
int num;

printf("enter the num:");
scanf("%d",&num);


if(num>0)
{
printf("num is positive",num);

}
else if(num<0)
{
printf("num is negative",num);
}
else 
{
printf("num is 0",num);

}

return 0;

}
