/*#include<stdio.h>

void print_character(char ch,int num_times)
{ 
for (int i=1 ; i<=num_times ; i++)
{
printf("%c",ch);
}
printf("\n");
}
int main()
{

int num;
char ch;
printf("enter the num:");
scanf("%d",&num);

printf("enter char:");
scanf(" %c", &ch);

print_character(ch,num);

}
*/



#include <stdio.h>

void print_character(char ch, int num_times) {
  for (int i = 1; i <= num_times; i++) {
    printf("%c", ch);
  }
  printf("\n");
}

int main() {
  int num;
  char ch;

  printf("Enter the number of times to print a character: ");
  scanf("%d", &num);

  printf("Enter the character to be printed: ");
  scanf(" %c", &ch); // Add a space before %c to consume leftover newline

  print_character(ch, num);

  return 0;
}

