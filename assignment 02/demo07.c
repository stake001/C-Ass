
//without using logical operator
/*#include<stdio.h>
int main()
{

int n1;
here:
printf("enter the year:");
scanf("%d",&n1);

if(n1%4==0)
{
printf("this is a leap year");
}
else
{
printf("not a leap year\n");
}
printf("\n");
goto here;
return 0;
}
*/

// with using logical operator

#include<stdio.h>
int main()
{
int n;

printf("enter the year:");
scanf("%d",&n);


if(n%4==0)
printf("this is leap year\n");
else if(n%100==0)
printf("this is leap year\n");
else if(n%400==0)
printf("this is leap year\n");
else
printf("not a leap year\n");

if((n%4==0 && n%100!=0 || n%400==0))
printf("this is leap year\n");
else
printf("not a leap year\n");

return 0;
}
