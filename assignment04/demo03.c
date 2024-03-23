/*#include<stdio.h>
double calculator(double num1,double num2, char opr);
int main()
{

double res, num1,num2;
char opr;

printf("enter 1st num:");
scanf("%lf",&num1);

printf("enter operator(+,-,*,/");
scanf("%c",&opr);

printf("enter 2nd num:");
scanf("%lf",&num2);

res=calculator(num1,num2,opr);
if(res != -1.0){
printf("%.2lf %c %.2lf=%.2lf\n",num1,opr,num2,res);
}
return 0;
}

//double calculator(double num1,double num2, char opr);

switch(opr) {

case "+" : 
			res=num1+num2;
               break;
			   
case "-" : 
			res=num1-num2;
                  break;

case "*" : 
	     	res=num1*num2;
               break;
case "/" : 
             if(num2 ==0){
			 printf("invalid num:");
			 }
			 else{
			return res=num1/num2;
            }
			break;


}
*/









#include <stdio.h>

double calculator(double num1, double num2, char opr) {
  switch (opr) {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      if (num2 == 0) {
        printf("Error: Division by zero\n");
        return -1.0; // Or any other value to indicate an error
      } else {
        return num1 / num2;
      }
    default:
      printf("Invalid operator\n");
      return -1.0; // Or any other value to indicate an error
  }
}


int main() {
  double num1, num2, result;
  char opr;

  printf("Enter 1st number: ");
  scanf("%lf", &num1);

  printf("Enter operator (+, -, *, /): ");
  // Add a space before %c to consume potential whitespace
  scanf(" %c", &opr); // Extra space is important

  printf("Enter 2nd number: ");
  scanf("%lf", &num2);

  result = calculator(num1, num2, opr);

  if (result != -1.0) { // Check for errors
    printf("%.2lf %c %.2lf = %.2lf\n", num1, opr, num2, result);
  }

  return 0;
}



