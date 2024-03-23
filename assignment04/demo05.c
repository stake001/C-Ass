#include<stdio.h>
void print_character(char,int)

int main()
{
int num;
char ch;
printf("enter the num:");
scanf("%d",&num);

printf("enter char:");
scanf("%c",&ch);

return 0;


void print_character(char ch,int num_times){
if(num_times<=0){
return;
}

for(i=0;i<num_times;i++){
printf("%c",ch);
}
printf("\n");
}
}



