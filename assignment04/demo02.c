#include<stdio.h>
#include<math.h> 
//function declaration
double calculate_power(double base, double exp)
{
 if (exp == 0) {
    return 1.0; // Base case: any number raised to the power of 0 is 1
  } else {
    return base * calculate_power(base, exp -1); // Recursive case
  }
return calculate_power(base,exp);

}


int main() 
{
    double base ;
    double exp ;

     printf("Enter the base number: ");
  scanf("%lf", &base);

  printf("Enter the exponent: ");
  scanf("%lf", &exp);  

    // calculates the power
   double  result = calculate_power(base, exp);
       
    printf("%.1lf ^ %.1lf = %.2lf", base, exp, result);

    return 0;
}


