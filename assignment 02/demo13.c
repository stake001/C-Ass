/*#include<stdio.h>
int main()
{
int a,b,res;
printf("enter first num:");
scanf("%d",&a);
printf("enter second num:");
scanf("%d",&b);


switch()
{
	case: + 
          res=a+b;
		  prtinf("res=%d",res);
		 break;
 	
	case: - 
		  res=a-b;
		  printf("res=%d",res);
break;

	case: * 
		  res=a*b;
		  printf("res=%d",res);
break;

	case: / 
		  res = a/b;
		  printf("res =%d",res);
		  break;

}
return 0;
}*/


#include <stdio.h>

float add(float num1, float num2) {
  return num1 + num2;
}

float subtract(float num1, float num2) {
  return num1 - num2;
}

float multiply(float num1, float num2) {
  return num1 * num2;
}

float divide(float num1, float num2) {
  if (num2 == 0) {
    printf("Error: Division by zero is not allowed.\n");
    return -1.0; // Indicate error (can be replaced with NaN)
  }
  return num1 / num2;
}

int main() {
  char operator;
  float num1, num2, result;

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator); // Read with a space to avoid issues with whitespace

  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  switch (operator) {
    case '+':
      result = add(num1, num2);
      printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
      break;
    case '-':
      result = subtract(num1, num2);
      printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
      break;
    case '*':
      result = multiply(num1, num2);
      printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
      break;
    case '/':
      result = divide(num1, num2);
      if (result != -1.0) { // Check for division by zero error
        printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
      }
      break;
    default:
      printf("Invalid operator\n");
  }

  return 0;
}

