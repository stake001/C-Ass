/*#include<stdio.h>
int factorial(int,int);
int mpower(int,int,int);

int main(void)
{

int num;
int base,index;
int i;

printf("enter number:");
scanf("%d",&num);

printf("%d != %d\n",num,factorial(num,i));

printf("enter number:");
scanf("%d,%d",&base,&index);
printf("%d^%d=%d\n",index,base, mpower(base,index,i,num));
return 0;
}

//function declaration
int factorial(int num,int i)
{

  int fact=1;
  for(i=1;i<=num;i++)
  fact*=i;
  return fact;
}

int mpower(int base,int index,int num,int i)
{
int pow=1;
for(i=1;i<=num;i++);
pow *= 1;
return pow;
}

*/



#include<stdio.h>

// function declarations
int factorial(int);
int mpower(int, int);

int main(void)
{
	int num;
	int base, index;

	printf("Enter number : ");
	scanf("%d", &num);

	printf("%d! = %d\n", num, factorial(num));

	printf("Enter base and index : ");
	scanf("%d %d", &base, &index);

	printf("%d ^ %d = %d\n", base, index, mpower(base, index));

	return 0;
}

// function definitions
int factorial(int num)
{
	int fact = 1;
	for(int i = 1 ; i <= num ; i++)
		fact *= i;
	return fact;
}

int mpower(int base, int index)
{
	int p = 1;
	for(int i = 1 ; i <= index ; i++)
		p *= base;
	return p;
}






