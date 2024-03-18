#include<stdio.h>
int main()
{
char ch;
printf("enter input:");
scanf("%c",&ch);

if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
{
if((ch>=65 && ch<=90))
	printf("char is uppercase:%c\n",ch);
else 
	printf("char is lowercase:%c\n",ch);
}
else if (ch>=48 && ch<=57)
printf("digit %c\n",ch);

else if(ch=='\n')
printf("Enter\n");

else if(ch=='\t')
printf("Tab\n");

else if(ch==32)
printf("Space\n");


return 0;

}








/*#include <stdio.h>

int main() {
    char ch;

    printf("Enter input: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("char is uppercase: %c\n", ch);
        } else {
            printf("char is lowercase: %c\n", ch);
        }
    } else {
        printf("char is not an alphabet: %c\n", ch);
    }

    return 0;
}
*/



