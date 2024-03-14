#include<stdio.h>

int main()
{
int num,a,b,c,d,temp;

printf("enter the num:");
scanf("%d",&num);

temp=num;

d=num%10;
num/=10;

c=num%10;
num/=10;

b=num%10;
num/=10;


a=num;

printf("%d\t %d\t %d\t %d\t",a,b,c,d);
printf("%d= %d+ %d+ %d+%d\n",temp,a*1000,b*100,c*10,d);
printf("%d %d %d %d\n",d,c,b,a);

return 0;
}

