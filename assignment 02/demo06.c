#include<stdio.h>

void pallindrome(int n);

int main()
{
int n;

printf("enter the num:");
scanf("%d",&n);
pallindrome(n);
return 0;
}

void pallindrome(int n)
{
int num=n;
int rem;
int rev=0;

while(num !=0)
{
	rem= num % 10;
	rev=(rev*10)+rem;
	num/=10;
}

if(rev==n)
{
	printf("num is a pallindrome",n);
}

else
{
	printf("num  not a pallindrome",n);
}

	}

