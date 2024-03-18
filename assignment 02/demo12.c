#include<stdio.h>
int main()
{

int month;
int year;
printf("Enter the month(1-12):");
scanf("%d",&month);
printf("Enter the year:");
scanf("%d",&year);



switch(month) {
	case 1 : case 3:case 5: case 7: case 8:case 10: case 12:
	//if(month==1 || month==3||month==5||month==7||month==8||month==10||month==12)
	
printf("31 days");

break;

	case 2:
	//	if(month==2)
		
		 if((year%4==0 && year%100!=0 || year%400==0))
	{
	
		printf("29 days");
	}	
		else
		{
		printf("28 days");
	}

	break;

			case 4 : case 6 : case 9 : case 11:
			printf("30 days");
	break;
	default:
	("Invalid format");


}
return 0;
}


