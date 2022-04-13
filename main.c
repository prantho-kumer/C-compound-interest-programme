#include <stdio.h>
#include <math.h>

int main(void) {
 /*find compound interest */

float p, rate, year, ci;
printf("Please enter principle amount: ");
scanf("%f",&p);
printf("Please enter interest Rate: ");
scanf("%f",&rate);
printf("Please enter Time of years: ");
scanf("%f",&year);

ci=p*pow(1+rate/100, year)-p;
printf("Compound interest is: %2f \n", ci); 
 
 
 
  return 0;
}