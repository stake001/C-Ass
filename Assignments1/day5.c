#include<stdio.h>
int main()
{
	int  num;
	char ch;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter character:");
	scanf("%*c%c",&ch);
	for(int i=1;i<=num;i++){
     printf("%c",ch);
    }

	return 0;
}
