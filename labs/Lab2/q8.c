#include <stdio.h>

float interestCalc(float amt, float intrst, float paymnt)
{
  intrst=intrst/12; //get the amount that the bill will equal after the allotted month
  intrst/=100;
  intrst+=1;  //get from percentage to real numbers
  amt=amt*intrst; //add the interest on
  amt -= paymnt;
  return amt;
}
int main()
{
  float loan = 0.0f;
  float i = 0.0f;
  float pay = 0.0f;
  float first=0.0f;
  float sec=0.0f;
  float third=0.0f;
  
  printf("Enter loan amount: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &i);
  printf("Enter monthly payment: ");
  scanf("%f", &pay);
  
  first=interestCalc(loan, i, pay);
  sec=interestCalc(first, i, pay);
  third=interestCalc(sec, i, pay);
  printf("Balance remain after 1st payment: %.2f\n", first);
  printf("Balance remain after 2nd payment: %.2f\n", sec);
  printf("Balance remain after 3rd payment: %.2f\n", third);
}
