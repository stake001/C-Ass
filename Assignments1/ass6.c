#include<stdio.h>
int main()
{
int num ,a;
printf("enter the integer:");
scanf("%d",&num);

printf("table of %d\n",num);
for(a=1;a<=10;a++)
{
printf("%d*%d=%d\n",a,num,(num*a)); //this line is importantnt without this linr code will not give output.
}  
return 0;
}
