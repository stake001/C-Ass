#include<stdio.h>
#include<limits.h>
int main()
{
printf("---------------------------------------------------------------------------------------------\n");
printf("data Type               size             format specifier                Range");
printf("---------------------------------------------------------------------------------------------\n");
printf("char                     %d                     %%c                        %d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
printf("short int                %hd                    %%hd                       %hd to %hd\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
printf("unsigned  int            %u                     %%u                        %u to %u\n",sizeof(unsigned int),UINT_MAX);
printf("int                      %d                     %%d                        %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
printf("long int                 %ld                    %%ld                       %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);


return 0;
}
