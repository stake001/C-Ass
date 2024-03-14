#include<stdio.h>
int main()
{
float celsius,fahrenheit;
int i;
printf("enter temp in celsius\n");
scanf("%f",&celsius);

fahrenheit=(celsius * 9/5)+32;
printf(" %.2fcelsius=  %.2ffahrenheit ",celsius,fahrenheit);

return 0;
}




